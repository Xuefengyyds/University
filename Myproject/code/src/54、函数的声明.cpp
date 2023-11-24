#include<iostream>
using namespace std;
//函数的声明
//比较函数，实现两个整形数字进行比较，返回较大的值
//定义

//提前告诉编译器告诉函数的存在，可以利用函数的声明
//函数的声明
//声明可以写多次（建议一次），但定义只能写一次！！！！！！！！！
int max(int a,int b);

int main(){
int c=10;
int d=20;

cout<<max(c,d)<<endl;





    system("pause");
    return 0;
}

int max(int a,int b)
{
    return a>b?a:b;    //三目运算符
}
