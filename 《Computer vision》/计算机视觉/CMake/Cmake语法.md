# CMake

通常构造项目，建立一个两个文件夹，一个放头文件，一个放源文件

```cpp
cmake_minimum_required(VERSION 3.22)    //最低版本要求
project( showImage )                    //定义项目名称
find_package( OpenCV REQUIRED )         
add_executable( showImage test.cpp )    //为了编译可执行文件main，所需要的源文件
MESSAGE(STATUS "This is BINARY dir " ${HELLO_BINARY_DIR})
MESSAGE(STATUS "This is SOURCE dir "${HELLO_SOURCE_DIR})
target_link_libraries( showImage ${OpenCV_LIBS} )
```

```cpp
find_package( OpenCV REQUIRED )      //find_package()命令用来查找依赖包   
```

```cpp
target_link_libraries( showImage ${OpenCV_LIBS} )
```
target_link_libraries是CMake中用来指定目标（例如可执行文件或库）所依赖的库的函数。在你的例子中，showImage是你的目标（可能是一个可执行文件），${OpenCV_LIBS}是指向OpenCV库的变量。

通过使用这个函数，你可以告诉CMake构建系统链接你的目标与特定的库，以便在编译后能够正确地运行你的程序。

```cpp
# 指定 CMake 的最低编译版本
CMAKE_MINIMUM_REQUIRED(VERSION 3.14)
# ...
PROJECT (MATH)
# 搜集 src 目录下的所有 .cpp 文件(源文件)
# SRC_LIST 代表 src 目录下的所有源文件 
# AUX_SOURCE_DIRECTORY (${PROJECT_SOURCE_DIR}/src SRC_LIST)
#glob含义 https://www.cnblogs.com/coderfenghc/archive/2012/07/08/2581734.html
FILE(GLOB SRC_LIST_CPP "${PROJECT_SOURCE_DIR}/src/*.cpp")
FILE(GLOB SRC_LIST_C "${PROJECT_SOURCE_DIR}/src/*.c")
# 指定头文件在哪个目录
INCLUDE_DIRECTORIES (${PROJECT_SOURCE_DIR}/include)
# 指定 so 的生成目录 lib
SET (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
# MESSAGE (STATUS "src_list : "${SRC_LIST})
# 指定生成动态库 .so  math -> libmath.so  默认生成的是静态库.a
ADD_LIBRARY (math SHARED ${SRC_LIST_CPP} ${SRC_LIST_C})
```

```cpp
# 指定 CMake 的最低编译版本
CMAKE_MINIMUM_REQUIRED(VERSION 3.14)# ...
PROJECT (HELLO)
# 指定头文件在哪个目录
INCLUDE_DIRECTORIES (${PROJECT_SOURCE_DIR}/include)
# 编译是需要链接 lib 目录下的 libmath.so
# 指定 so 在哪个目录下
LINK_DIRECTORIES (${PROJECT_SOURCE_DIR}/lib)
# 生成可执行文件ADD_EXECUTABLE (hello hello.cpp)
# 为 hello 添加编译链接库
TARGET_LINK_LIBRARIES (hello math)
```

## CMakeLists.txt的编写

- 对于普通的链接

```cpp
cmake_minimum_required(VERSION 3.22.1)
project(simple_project)
incude_dirctories(include)    //包含头文件的库
add_executable(main src/main.cpp src/foo.cpp)
```

- 链接静态库
```cpp
cmake_minimum_required(VERSION 3.22.1)
project(simple_project)
incude_dirctories(include)    //包含头文件的库
add_executable(main src/main.cpp )

add_library(foo src/foo.cpp)
target_link_libraries(main foo)    //链接
```

```cpp
cmake -B build/
make -C buidl/ -j4
```