#include<iostream>
using namespace std;
int main(){
//分析乘法口诀表
// 列数*行数=计算结构
//列数<=当前行数

//乘法口诀表
for(int i=1;i<=9;i++)
{
    // cout<<i<<endl;
    for(int j=1;j<=i;j++)
    {
        cout<<j<<"*"<<i<<"="<<j*i<<"   ";
    }
    cout<<endl;
}












system("pause");

  return 0;
}