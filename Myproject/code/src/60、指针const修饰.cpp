#include<iostream>
using namespace std;
int main(){
//1、const修饰指针 常量指针 特点指针的指向可以改，但指针指向的值不可以改   const int*p=&a
//2、int*const p=&a 指针常量 特点指针的指向不能改，但指针指向的值可以改
//3、const既修饰了指针，又修饰了常量 指针的指向和指针指向的值都不可以改 cont int*constp=&a

//1、const修饰指针 常量指针
int a=10;
int b=20;
const int*p=&a;
p=&b;
//2、const修饰常量
int*const p2=&a;
*p2=100;

// 3、const修饰指针和常量(两个都不可以改)
const int* const p3=&a;





system("pause");
return 0;
}