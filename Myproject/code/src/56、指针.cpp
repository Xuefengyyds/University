#include<iostream>
using namespace std;
int main(){
//1、定义指针
int a=10;
//指针定义的语法：数据类型*指针变量名；
int * p;       //和a是同一个数据类型
//让指针记录变量a的地址
p=&a;          //&是取地址
cout<<"a的地址为"<<&a<<endl;
cout<<"指针p为:"<<p<<endl;

// 2、使用指针
//可以通过解引用的方式来找到指针指向的内存
//指针前加*代表解引用，找到指针指向内存中的数据
*p=1000;               //通过指针找到a的内存，通过*p来修改（解引用）
cout<<"a="<<a<<endl;
cout<<*p<<endl;

//值传递和地址传递，重点是改不改变实参


    system ("pause");
    return 0;
}