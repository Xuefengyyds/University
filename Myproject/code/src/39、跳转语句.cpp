#include<iostream>
using namespace std;
int main(){

//break语句
//作用用于跳出选择结构或者循环结构
/*
出现在switch条件语句中，作用是终止case并跳出switch
出现在循环语句中，作用是跳出当前循环语句
出现在嵌套结构中，作用是跳出最近的内层循环语句
*/
//break的使用时机
// 1、switch条件语句中
cout<<"请选择副本难度"<<endl;
cout<<"1、普通"<<endl;
cout<<"2、中等"<<endl;
cout<<"3、困难"<<endl;

int select=0;  //创建选择结构的变量

cin>>select; //等待用户的输入

switch(select)
{
    case 1:
    cout<<"你选择的是普通难度"<<endl;
    break;  //退出switch语句
    case 2:
    cout<<"你选择的是中等难度"<<endl;
    break;
    case 3:
    cout<<"你选择的是普通难度"<<endl;
    break;
    default:
    break;
}

// 出现在循环语句中
for(int i=0;i<10;i++)
{
  //如果i=5，退出循环，不再打印
  if(i==5)
  {
    break;
  }
  cout<<i<<endl;
}

//出现在嵌套的循环语句中

for(int i=0;i<10;i++)
{
  for(int j=0;j<10;j++)
  {
    if(j==5)
    {
      break;//利用break退出内层循环而不会退出外层循环
    }
    cout<<"* ";
  }
  cout<<endl;

}














system("pause");

  return 0;
}