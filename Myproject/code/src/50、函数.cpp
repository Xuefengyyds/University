#include<iostream>
using namespace std;
    //函数是讲过一段经常使用的代码封装起来，减少重复代码
    //一个较大的程序，一般分为若干个模块，每个模块实现特定的功能
    /*函数的定义一般有五个步骤
    1、返回值类型  int
    2、函数名     add
    3、参数表列   (int num1,int num2) 
    4、函数体语句  int sum=num1+num2;
    5、reture 表达式      return sum  */  
    /*语法
    返回值类型 函数名 （参数列表）
    {
        函数体语句
        return表达式
    }*/
//加法函数，实现两个整形相加，并且将相加的结果进行返回
int add(int num1,int num2)//不是实际的参数，形参
{
    int sum=num1+num2;
    return sum;
}

int main(){ 
//main函数中调用add函数
//a和b叫做实际的参数
//当调用函数的时候，实参的值会传递给形参
int a=10;
int b=20;
//函数调用的语法：函数名称（参数）
int c=add(a,b);
cout<<c<<endl;
int e=500;
int d=200;
int f=add(e,d);
cout<<f<<endl;

system("pause");
return 0;
  }