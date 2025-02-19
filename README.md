# MyFave

This is a simple C++ command line application to maintain a list of your favorites.

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
## How to Quit the Application

To quit the application at any time, simply type `DONE` and press **Enter**.