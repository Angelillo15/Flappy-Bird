# Build

## With blocksds
```bash
make
```

## With libnds
```bash
make -f Makefile.libnds
```

## Watch mode
You can use nodemon to watch for changes and rebuild automatically
```bash
nodemon --watch source  --exec "make" -e cpp,hpp,h,c
```