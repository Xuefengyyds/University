#include<iostream>
using namespace std;

int main(){
//整形：short int long long long
//可以利用sizeof求出数据类型占有内存的大小
//语法：sizeof（数据类型/变量）

short num1 =1000;
cout<<"short占有内存空间为:"<<sizeof(num1)<<endl;
cout<<num1<<endl;
//同理测试别的


system("pause");

return 0;
}
//整型大小比较