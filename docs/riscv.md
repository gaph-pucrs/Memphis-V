# Acquiring RISCV Cross-compiler

## RHEL (dnf-based distros) and Ubuntu (apt-based distros)

For GCC 12.1.0 (latest tested version, recommended) you need to build it manually.
Create a directory for installation and for building:

```console
mkdir -p ~/tools_memphis/riscv64-elf
mkdir ~/riscv64-elf
```

Obtain binutils, extract, compile and install:
```console
cd ~/riscv64-elf
wget https://ftp.gnu.org/gnu/binutils/binutils-2.39.tar.xz
tar xf binutils-2.39.tar.xz
cd binutils-2.39
sed -i '/ac_cpp=/s/\$CPPFLAGS/\$CPPFLAGS -O2/' libiberty/configure
mkdir build
cd build
../configure --prefix=$HOME/tools_memphis/riscv64-elf --target=riscv64-elf --enable-multilib --enable-interwork --with-gnu-as --with-gnu-ld --disable-nls --enable-ld=default --enable-gold --enable-plugins --enable-deterministic-archives
make -j$(nproc)
make install
```

Obtain newlib and extract to build GCC:
```console
cd ~/riscv64-elf
wget https://sourceware.org/pub/newlib/newlib-4.1.0.tar.gz
tar xf newlib-4.1.0.tar.gz
```

Obtain GCC, extract, build and install:
```console
cd ~/riscv64-elf
wget ftp://ftp.gnu.org/gnu/gcc/gcc-12.1.0/gcc-12.1.0.tar.xz
tar xvf gcc-12.1.0.tar.xz
cd gcc-12.1.0
echo 12.1.0 > gcc/BASE-VER
sed -i "/ac_cpp=/s/\$CPPFLAGS/\$CPPFLAGS -O2/" {libiberty,gcc}/configure
mkdir build
cd build
export PATH=$HOME/tools_memphis/riscv64-elf/bin:$PATH
export CFLAGS_FOR_TARGET='-g -Os -ffunction-sections -fdata-sections'
export CXXFLAGS_FOR_TARGET='-g -Os -ffunction-sections -fdata-sections'
../configure --prefix=$HOME/tools_memphis/riscv64-elf --enable-languages=c,c++ --enable-pthreads=single --enable-plugins --enable-multilib --enable-libgcc --disable-libgomp --disable-libquadmath --disable-libffi --disable-libssp --disable-libmudflap --disable-decimal-float --disable-libstdcxx-pch --disable-nls --disable-shared --disable-tls --with-newlib --with-gnu-as --with-gnu-ld --with-system-zlib --with-gmp --with-mpfr --with-mpc --with-isl --with-libelf --enable-gnu-indirect-function --with-headers=../../newlib-4.1.0/newlib/libc/include
make -j$(nproc)
make install
```

Build newlib-nano and install:
```console
cd ~/riscv64-elf/newlib-4.1.0
mkdir build-nano
cd build-nano
export PATH=$HOME/tools_memphis/riscv64-elf/bin:$PATH
export CFLAGS_FOR_TARGET='-g -Os -ffunction-sections -fdata-sections'
../configure --target=riscv64-elf --prefix=$HOME/tools_memphis/riscv64-elf --disable-newlib-supplied-syscalls --enable-newlib-reent-small --enable-newlib-retargetable-locking --disable-newlib-fvwrite-in-streamio --disable-newlib-fseek-optimization --disable-newlib-wide-orient --enable-newlib-nano-malloc --disable-newlib-unbuf-stream-opt --enable-lite-exit --enable-newlib-global-atexit --enable-newlib-nano-formatted-io --disable-nls
make -j$(nproc)
make install
find "$HOME/tools_memphis/riscv64-elf" -regex ".*/lib\(c\|g\|m\|rdimon\|gloss\)\.a" -exec rename .a _nano.a '{}' \;
install -d $HOME/tools_memphis/riscv64-elf/riscv64-elf/include/newlib-nano
install -m644 -t $HOME/tools_memphis/riscv64-elf/riscv64-elf/include/newlib-nano $HOME/tools_memphis/riscv64-elf/riscv64-elf/include/newlib.h
```

Build newlib and install:
```console
cd ~/riscv64-elf/newlib-4.1.0
mkdir build-newlib
cd build-newlib
export PATH=$HOME/tools_memphis/riscv64-elf/bin:$PATH
export CFLAGS_FOR_TARGET='-g -O2 -ffunction-sections -fdata-sections'
../configure --target=riscv64-elf --prefix=$HOME/tools_memphis/riscv64-elf --enable-newlib-io-long-long --enable-newlib-io-c99-formats --enable-newlib-register-fini --enable-newlib-retargetable-locking --disable-newlib-supplied-syscalls --disable-nls
make -j$(nproc)
make install
cd ../
```

Clean-up everything:
```console
cd ~
rm -rf ~/riscv64-elf
```

Export the environment variables:
* PATH
* MANPATH
   
Here we do it persistently with .bashrc. Remember to close and reopen the terminal after running:
```console
echo -e "# riscv-elf\nPATH=~/tools_memphis/riscv64-elf/bin:\${PATH}\nexport MANPATH=~/tools_memphis/riscv64-elf/man:\${MANPATH}\n" >> ~/.bashrc
```

## Arch (pacman/aur distros)

Install directly from pacman:
```console
pacman -Syu
pacman -S riscv64-elf-gcc riscv64-elf-binutils riscv64-elf-newlib
```
