# MyFave

This is a simple C++ command line application to maintain a list of your favorites.

## Quiz 01 Changes (09/25/2024)

Contiguous Integration badges:

Badge created from CI after commit pushed into forked main:
- [![Build C++](https://github.com/GoosiferIO/MyFave/actions/workflows/main.yml/badge.svg)](https://github.com/GoosiferIO/MyFave/actions/workflows/main.yml)

Badge created from CI after pull request for feature branch into forked main:
- [![Build C++](https://github.com/GoosiferIO/MyFave/actions/workflows/main.yml/badge.svg)](https://github.com/GoosiferIO/MyFave/actions/workflows/main.yml)

## Getting Started

If you have not already built the image from `Dockerfile`, use the command:

```
docker build -t cpp-container .
```

You should only have to build once. Once built, run the container:

```
docker run -it cpp-container
```

...or run it interactively in a shell:

```
docker run -it cpp-container sh
```

...or run it with a volume mounted to the current source code:

```
docker run -v "$(pwd)":/usr/src -it cpp-container
```

