# set_icon.cmake
## Introduction
Setting executable's icon from cmake is not straightforward. I tried to make it simple.<br/>
This script only works on MS Windows and requires imagemagick if you use image format other than .ico.

## Usage
Add the `set_icon.cmake` to your project's prefix path.
```cmake
add_executable(HelloWorld main.cpp file1.cpp ... fileN.cpp) # make an executable
include(set_icon)
set_icon(HelloWorld res/cool_icon.png) # set executable's icon(requires imagemagick program because we passed png image)
```

## License
MIT
