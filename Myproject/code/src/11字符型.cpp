#include<iostream>
using namespace std;
int main(){

//1。字符型变量创建方式
char ch ='b';
ch='a';
cout<<ch<<endl;


//2.字符型变量所占内存大小

cout<<"char大小"<<sizeof(char)<<endl;
//3。字符型变量常见错误
//char ch2 ="b";//创建字符型变量时候要用单引号
//char ch2 'abcdf'//单引号内只能有一个字符
//4 字符型变量对应的ASCII编码,要记住

//a对应97
//A对应65
//ASCII是用于信息交换的
cout<<(int)ch<<endl;





system("pause");

  return 0;
}