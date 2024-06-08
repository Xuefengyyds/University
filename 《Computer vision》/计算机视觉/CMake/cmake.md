# CMake

析下CMakeLists.txt文件中的CMake语句

CMakeLists.txt，这个文件是 cmake 的构建定义文件，文件名是大小写相关的

文件的内容如下：

```cpp
PROJECT (HELLO)
SET(SRC_LIST main.c)
MESSAGE(STATUS "This is BINARY dir " ${HELLO_BINARY_DIR})
MESSAGE(STATUS "This is SOURCE dir "${HELLO_SOURCE_DIR})
ADD_EXECUTABLE(hello ${SRC_LIST})
```

## PROJECT 指令的语法是：
```cpp
PROJECT(projectname [CXX] [C] [Java])
```

可以用这个指令定义工程名称，并可指定工程支持的语言，支持的语言列表是可以忽略的，默认情况表示支持所有语言。

这个指令隐式的定义了两个 cmake 变量:

```cpp
<projectname>_BINARY_DIR
<projectname>_SOURCE_DIR
```

本工程里就是`HELLO_BINARY_DIR` 和 `HELLO_SOURCE_DIR`(所以 CMakeLists.txt 中两个 MESSAGE指令可以直接使用了这两个变量)，因为采用的是内部编译，两个变量目前指的都是工程所在路径`/Compilation_tool/cmake/test1`，外部编译，两者所指代的内容会有所不同。

同时 cmake 系统也帮助我们预定义了 `PROJECT_BINARY_DIR` 和 `PROJECT_SOURCE_DIR`变量，他们的值分别跟`HELLO_BINARY_DIR` 与 `HELLO_SOURCE_DIR` 一致。

为了统一起见，建议以后直接使用 `PROJECT_BINARY_DIR`，`PROJECT_SOURCE_DIR`，即使修改了工程名称，也不会影响这两个变量。
如果使用了<projectname>_SOURCE_DIR ，修改工程名称后，需要同时修改这些变量。

## SET 指令的语法是：

```cpp
SET(VAR [VALUE] [CACHE TYPE DOCSTRING [FORCE]])
```

SET 指令可以用来显式的定义变量。

我们用到的是 `SET(SRC_LIST main.c)`，如果有多个源文件，也可以定义成：

```cpp
SET(SRC_LIST main.c t1.c t2.c)
```

## MESSAGE 指令的语法是：

```cpp
MESSAGE([SEND_ERROR | STATUS | FATAL_ERROR] "message to display" ...)
```

这个指令用于向终端输出用户定义的信息，包含了三种类型:

`SEND_ERROR`，产生错误，生成过程被跳过

`SATUS `，输出前缀为–的信息

`FATAL_ERROR`，立即终止所有 `cmake` 过程
我们在这里使用的是 `STATUS` 信息输出，演示了由 PROJECT 指令定义的两个隐式变量`HELLO_BINARY_DIR` 和 `HELLO_SOURCE_DIR`。

## ADD_EXECUTABLE 指令

```cpp
ADD_EXECUTABLE(hello ${SRC_LIST})
```

定义了这个工程会生成一个文件名为 hello 的可执行文件，相关的源文件是 SRC_LIST 中定义的源文件列表，
本例也可以直接写成

 `ADD_EXECUTABLE(hello main.c)`

## ${} 指令

在本例我们使用了 `${}`来引用变量，这是 `cmake`的变量应用方式，但是，有一些例外，比如在 `IF` 控制语句，变量是直接使用变量名引用，而不需要 `${}`。如果使用了`${}`去应用变量，其实 `IF` 会去判断名为 `${}`所代表的值的变量，那当然是不存在的了。
