# Acquiring RISCV Cross-compiler

## RHEL (dnf-based distros) and Ubuntu (apt-based distros)

For GCC 14.1.0 (the latest tested version, recommended), you must build it manually.
First, install dependencies (as root):
```console
dnf install texinfo gmp-devel mpfr-devel libmpc-devel isl-devel
```

Export versions and directories to customize your installation:
```console
export INSTALL_DIR=~/tools_memphis/riscv64-elf
export BUILD_DIR=~/riscv64-elf
export BINUTILS_VER=2.42
export NEWLIB_VER=4.4.0.20231231
export GCC_VER=14.1.0
```

Create directories for installation and for building:
```console
mkdir -p $INSTALL_DIR
mkdir -p $BUILD_DIR
```

Obtain binutils, extract, compile and install:
```console
cd $BUILD_DIR
wget https://ftp.gnu.org/gnu/binutils/binutils-$BINUTILS_VER.tar.xz
tar xvf binutils-$BINUTILS_VER.tar.xz
cd binutils-$BINUTILS_VER
sed -i '/ac_cpp=/s/\$CPPFLAGS/\$CPPFLAGS -O2/' libiberty/configure
mkdir build
cd build
../configure --prefix=$INSTALL_DIR --target=riscv64-elf --enable-multilib --enable-interwork --with-gnu-as --with-gnu-ld --disable-nls --enable-ld=default --enable-gold --enable-plugins --enable-deterministic-archives
make -j$(nproc)
make install
export PATH=$INSTALL_DIR/bin:$PATH
```

Obtain newlib and extract to build GCC:
```console
cd $BUILD_DIR
wget https://sourceware.org/pub/newlib/newlib-$NEWLIB_VER.tar.gz
tar xvf newlib-$NEWLIB_VER.tar.gz
```

Obtain GCC, extract, build and install:
```console
cd $BUILD_DIR
wget https://ftp.gnu.org/gnu/gcc/gcc-$GCC_VER/gcc-$GCC_VER.tar.xz
tar xvf gcc-$GCC_VER.tar.xz
cd gcc-$GCC_VER
echo $GCC_VER > gcc/BASE-VER
sed -i "/ac_cpp=/s/\$CPPFLAGS/\$CPPFLAGS -O2/" {libiberty,gcc}/configure
mkdir build
cd build
export CFLAGS_FOR_TARGET='-g -Os -ffunction-sections -fdata-sections'
export CXXFLAGS_FOR_TARGET='-g -Os -ffunction-sections -fdata-sections'
../configure --prefix=$INSTALL_DIR --target=riscv64-elf --enable-languages=c,c++ --enable-pthreads=single --enable-plugins --enable-multilib --enable-libgcc --disable-libgomp --disable-libquadmath --disable-libffi --disable-libssp --disable-libmudflap --disable-decimal-float --disable-libstdcxx-pch --disable-nls --disable-shared --disable-tls --with-newlib --with-gnu-as --with-gnu-ld --with-system-zlib --with-gmp --with-mpfr --with-mpc --with-isl --with-libelf --enable-gnu-indirect-function --with-headers=../../newlib-$NEWLIB_VER/newlib/libc/include
make -j$(nproc)
make install
export PATH=$INSTALL_DIR/bin:$PATH
```

Build newlib-nano and install:
```console
cd $BUILD_DIR
cd newlib-$NEWLIB_VER
mkdir build-nano
cd build-nano
export CFLAGS_FOR_TARGET='-g -Os -ffunction-sections -fdata-sections'
../configure --prefix=$INSTALL_DIR --target=riscv64-elf --disable-newlib-supplied-syscalls --enable-newlib-reent-small --enable-newlib-retargetable-locking --disable-newlib-fvwrite-in-streamio --disable-newlib-fseek-optimization --disable-newlib-wide-orient --enable-newlib-nano-malloc --disable-newlib-unbuf-stream-opt --enable-lite-exit --enable-newlib-global-atexit --enable-newlib-nano-formatted-io --disable-nls
make -j$(nproc)
make install
find $INSTALL_DIR -regex ".*/lib\(c\|g\|m\|rdimon\|gloss\)\.a" -exec rename .a _nano.a '{}' \;
install -d $INSTALL_DIR/riscv64-elf/include/newlib-nano
install -m644 -t $INSTALL_DIR/riscv64-elf/include/newlib-nano $INSTALL_DIR/riscv64-elf/include/newlib.h
```

Build newlib and install:
```console
cd $BUILD_DIR
cd newlib-$NEWLIB_VER
mkdir build-newlib
cd build-newlib
export CFLAGS_FOR_TARGET='-g -O2 -ffunction-sections -fdata-sections'
../configure --prefix=$INSTALL_DIR --target=riscv64-elf --enable-newlib-io-long-long --enable-newlib-io-c99-formats --enable-newlib-register-fini --enable-newlib-retargetable-locking --disable-newlib-supplied-syscalls --disable-nls
make -j$(nproc)
make install
```

Clean-up everything:
```console
cd ~
rm -rf $BUILD_DIR
```

Export the environment variables:
* PATH
* MANPATH
   
Here we do it persistently with .bashrc. Remember to close and reopen the terminal after running:
```console
echo -e "# riscv-elf\nPATH=$INSTALL_DIR/bin:\${PATH}\nexport MANPATH=$INSTALL_DIR/man:\${MANPATH}\n" >> ~/.bashrc
```

## Arch (pacman/aur distros)

Install directly from pacman:
```console
pacman -Syu
pacman -S riscv64-elf-gcc riscv64-elf-binutils riscv64-elf-newlib
```
