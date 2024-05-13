# Acquiring Python and needed libraries

## Ubuntu (apt-based distros)

Run:
```console
apt update
apt install python3 python3-yaml
```

## RHEL (dnf-based distros)

Run:
```console
dnf update
dnf install python38 python38-pyyaml
alternatives --set python /usr/bin/python38
```

## Arch (pacman/aur distros)

Run:
```console
pacman -Syu
pacman -S python python-pyaml
```
