# C的编译机制

参考https://blog.csdn.net/qq_41035283/article/details/119716888  
https://blog.csdn.net/qq_40253126/article/details/131691000

- 编译、连接
  .c->预编译->.i->编译->.s->汇编->.o ->链接-> .out
-  加载执行
  ./a.out

控制顺序 -E，-S ，-C

# 编译成可执行文件
还有一种 `g++ src/main.cpp src/foo.cpp -I include/ -o main`
然后用 ./main 执行

头文件要用
```cpp
#ifndef 
#define 

#endif 

```

## 3.2）假设common.h在/home/user/include文件夹下：

A、main.cpp使用绝对路径或者相对路径引入(#include "/home/user/include/common.h")，然后使用下面命令编译：

`g++ main.cpp -o main`

B、main.cpp中使用#include "common.cpp"引入，在直接编译的时候用-I 指明路径（绝对路径或者相对路径）：

`g++ main.cpp -I /home/user/include/ -o main`
