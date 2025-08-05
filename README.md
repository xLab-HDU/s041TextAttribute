# 控制台颜色
在该项目中我们将探究如何在控制台中设置文本和背景颜色。

## How to Use

```sh
# configure the project
cmake -B build

# build the project
cmake --build build

# test the project
cd build
ctest --output-on-failure

# run the project
./build/bin/main.exe

# package the project
cpack -G ZIP
# or
cpack -G NSIS
```

## License

The source code is dual licensed under Public Domain and MIT -- choose whichever you prefer.
