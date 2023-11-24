#include<iostream>
using namespace std;

int main(){
//实型也叫浮点型，float 和double 表示的有效数字范围不同
//1.单精度 float 4个字节  
//2.双精度 double 8个字节
//默认情况下输出一个小数，会显示6位有效数字
float f1 =3.14f;   //通常会加一个f，默认情况会当作双精度，f转换为单精度

cout<<"f1="<<f1<<endl;

double d1=3.14;
cout<<"d1="<<d1<<endl;


//统计占有内存空间大小sizeof
cout<<"float占有内存空间为"<<sizeof(f1)<<endl;
//科学计数法
float f2=3e2;//3*10^2; e代表10的几次方

cout<<"f2="<<f2<<endl;

float f3=3e-2;//3*0.1^2 e-代表10的负几次方
cout<<"f3="<<f3<<endl;


system("pause");

return 0;
}