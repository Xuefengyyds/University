#include<iostream>
using namespace std;
int main(){
    /*空指针：指针变量指向内存中编号为0的空间
    用途：初始化指针变量
    空指针指向的内存是不可以访问的*/
    //空指针
    //1、空指针用于给指针变量进行初始化
    int*p=NULL;


    //2、空指针是不可以访问的
    //0-255之间的内存编号是系统占用的，因此不可以访问的
    *p=100;      //会报错




    system("pause");
    return 0;
}