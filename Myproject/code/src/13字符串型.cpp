#include<iostream> //用c++风格字符串时候，要包含这个头文件
#include<string>   //字符串型要包含一个头文件
using namespace std;
int main(){
//1.c风格的字符串
//注意事项 char字符串名加一个[]
//注意事项 =后面要用双引号包含起来字符串

char str[]="hello word";
cout<<str<<endl;



//2.c++风格的字符串
//要包含一个头文件      #include<string>
string str2="hello world";
cout<<str2<<endl;









system("pause");

  return 0;
}