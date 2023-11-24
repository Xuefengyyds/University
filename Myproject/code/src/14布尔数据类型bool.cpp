//true 真 本质是1
//false 假 本质是0
//bool 只占一个字节大小
#include<iostream>
using namespace std;
int main(){

//1。创建bool数据类型
bool flag =true;//代表真
cout<<flag<<endl;

flag=false;//fales代表假
cout<<flag<<endl;

//本质上1代表真的值 0代表假的

//2.查看bool类型所占的空间

cout<<"bool类型所占的内存空间："<<sizeof(bool)<<endl;






system("pause");

  return 0;
}