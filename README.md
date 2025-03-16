# GLFW Template

This is a [GLFW](https://www.glfw.org/) template with [CMake](https://cmake.org/download/) to use as starter.

## Prerequisites

- [CMake](https://cmake.org/download/)
- GLFW [installed binaries](#install-glfw-binaries)
- [GLAD](https://glad.dav1d.de/) (generate the one that suits you or use [mine](https://glad.dav1d.de/#language=c&specification=gl&api=gl%3D3.3&profile=core&loader=on))

## How-to

To use this template just
1. `git clone https://github.com/Lucasa98/glfw-template.git` wherever you want
2. Config `CMakeLists`:
   1. `glfw3_DIR` this should be where `glfw3Config.cmake` is located, inside the GLFW installation folder
   2. `GLAD_INCLUDE_DIR` path to the GLAD include directory. Personally, I put them on `C:/` after download and unzip but you do you.
3. Configure
```bash
mkdir build
cd build
cmake ..
```
4. Build `cmake --build .`

## Install GLFW Binaries

Follow the official GLFW instructions for [building](https://www.glfw.org/docs/3.3/compile_guide.html#compile_generate_gui) and [compiling](https://www.glfw.org/docs/3.3/compile_guide.html#compile_compile) but after `cmake --build path/to/build` execute `cmake --install path/to/build`. If you are using Windows you will get GLFW on `Program Files (x86)`.
