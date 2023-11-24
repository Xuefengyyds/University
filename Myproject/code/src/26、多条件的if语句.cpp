#include<iostream>
using namespace std;
int main(){

//选择结构 多条件的if语句
//输入一个考入分数，如果大于600，视为考入一本大学，在屏幕输出
//大于500，视为考入二本，在屏幕输出
//大于400，考入三本大学，在屏幕输出
//小于等于400，视为为考上本科，在屏幕输出

//1、用户输入分数
int score=0;

cout<<"请输入考试分数"<<endl;
cin>>score;

//2、提示用户输入的分数
cout<<"你输入的分数为"<<score<<endl;


//3、判断
//如果大于600，考上一本

if(score>600)
{
    cout<<"恭喜你考入一本大学"<<endl;
}
else if (score>500)
{
    cout<<"恭喜你考入二本"<<endl;
}


else if(score>400)
{
    cout<<"恭喜你考入三本"<<endl;
}

else
{
    cout<<"没学读"<<endl;
}
//如果大于500，考上二本
//如果大于400，考上三本
//前三个都没满足，没大学上














system("pause");

  return 0;
}