#include<iostream>
using namespace std;
int main(){
//指针所占的内存空间大小
int a=10;
// int*p;
// p=&a;
int*p=&a;
cout<<"*p所占内存空间"<<sizeof(int*)<<endl; //也可以写p八个字节
cout<<sizeof(float*);
//32位操作系统下，指针是占4个字节空间大小，不管是什么类型，在64位操作系统下，指针是占8个字节



    system("pause");
    return 0;
}