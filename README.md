<h1 align="center">Welcome to SDL2 CMake Starter 👋</h1>
<p>
  <a href="https://github.com/GlitchTech-Developments/SDL2-CMake-Starter/blob/master/LICENSE" target="_blank">
    <img alt="License: MIT" src="https://img.shields.io/github/license/GlitchTech-Developments/SDL2-CMake-Starter" />
  </a>
  <a href="https://twitter.com/GlitchTechEU" target="_blank">
    <img alt="Twitter: GlitchTechEU" src="https://img.shields.io/twitter/follow/GlitchTechEU.svg?style=social" />
  </a>
</p>

> A simple startingpoint for CMake, C++ and SDL2 combined together in a (fairly) neat way.

## Build status

| Branch   | Status |
|----------|--------|
| Main     | #      |

## How to start building?

Well, first of all, you need some form of a development environment. I personally use [CLion](https://www.jetbrains.com/clion/), but you can use whatever you want. 
So, since I use CLion, I will explain how to set it up in CLion.

### Setting up SDL2

First of all, you need to download the SDL2 development libraries. 
You can do this by going to it's Github repo [here](https://github.com/libsdl-org/SDL/releases/latest) and grab the devel minGW zip file, than dump the contents like the example version in the `./libs/SDL2` directory inside your project.

### Troubleshooting

If you run into any issues with regards to CMakes inability to find the SDL2 libraries, you probably need to add the `SLD2` directory to your `PATH` variable inside your OS (Operating System).
You could also inject the path into the CMakeLists.txt file, but I personally prefer to keep it out of there.
## Author

👤 **GlitchTech Developments**

* Website: https://glitchtech.eu
* Twitter: [@GlitchTechEU](https://twitter.com/GlitchTechEU)
* Github: [@GlitchTech-Developments](https://github.com/GlitchTech-Developments)

## 🤝 Contributing

Contributions, issues and feature requests are welcome!<br />Feel free to check [issues page](https://github.com/GlitchTech-Developments/SDL2-CMake-Starter/issues). 

## Show your support

Give a ⭐️ if this project helped you!