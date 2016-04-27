#!/bin/sh

bin=compress-pdf

type gs &>/dev/null
if [ $? -ne 0 ]; then
  echo "dependency not found: gs
It is contained in the package: ghostscript
One of these may work for you:
    brew install ghostscript
    sudo apt-get install ghostscript"
  exit 1
fi

# this script is currently brain dead.
# it merely tries two locations.
# in the future maybe use value of $PATH.

binpath=/usr/local/bin
if [ -d "$binpath" ]; then
  cp "$bin" "$binpath/$bin"
  echo "installed $binpath/$bin"
  exit 0
fi

binpath=/usr/bin
if [ -d "$binpath" ]; then
  cp "$bin" "$binpath/$bin"
  echo "installed $binpath/$bin"
  exit 0
fi
