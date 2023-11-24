#include<iostream>
using namespace std;
int main(){
//逻辑运算符 非  ！
//在c++中除了0都为真


int a=10;
cout<<!a<<endl;

cout<<!!a<<endl;

//真变假，假变真


//&& 与 两个条件都为真结果才为真
int a1=10;
int b1=10;
cout <<(a1&&b1)<<endl;


 a1=10;
 b1=0;
cout<<(a1&&b1)<<endl;

a=0;
b1=0;
cout<<(a&&b1)<<endl;

//同真为真，其余为假，只有两个真才真



system("pause");

  return 0;
}