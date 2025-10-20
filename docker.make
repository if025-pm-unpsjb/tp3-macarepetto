#! /bin/sh

case "$1" in
    gdb) 
        docker run -p 1234:1234 -p 5900:5900 -p 6900:6900 --rm -v $(pwd):/app -w /app rtsg make qemu-gdb
        break ;;
    *) 
        docker run -p 5900:5900 -p 6900:6900 -t -i --rm -v $(pwd):/app -w /app rtsg make $1 ;;
esac
