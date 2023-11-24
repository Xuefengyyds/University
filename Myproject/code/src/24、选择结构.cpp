#include<iostream>
using namespace std;
int main(){
//if 语句
//单行，多行，多条件
//单行格式if语句：if（条件）条件满足执行的语句
//选择结构 单行if语句
//用户输入分数，如果分数大于600，视为考上一本大学，在屏幕上输出

//1、用户输入分数
int score=0;
cout<<"请输入一个分数"<<endl;
cin >>score;



//2、打印用户输入的分数
cout<<"你输入的分数："<<score<<endl;


//3、判断分数是否大于600，如果大于那么输出
//注意事项，if条件后面不能加分号，不然白写
if (score>600)
{
  cout<<"恭喜你上清华"<<endl;
}




system("pause");

  return 0;
}