#include<iostream>
using namespace std;
int main(){
//取模运算本质是取余数
//只有整形运算才能取模运算
int a1=10;
int b1=3;
cout<<a1%b1<<endl;

int a2=10;
int b2=20;
cout<<a2%b2<<endl;
//两个数相除结果不能为零

//两个小数是不能做取模运算的
int a3=10;
int b3=10;
cout<<a3%b3<<endl;

//double d1 =3.14;
//double d2=1.1;
//cout<<d1%d2<<endl;


system("pause");

  return 0;
}