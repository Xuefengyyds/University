#include<iostream>
using namespace std;
int main(){
    //选择结构中多行的结构语句
    //让用户输入一个考试分数，如果分数有700考清华，
    //如果没有，就打印考上北京大学
    
//1、输入考试分数
int score=0;
cout<<"请输入一个考试分数"<<endl;
cin>>score;




//2、提示用户输入的分数
cout<<"你输入的分数为："<<score<<endl;



//3、判断，如果大于700，打印考上一本，否则打印为考上一本
if(score>700)    //满足执行此条件执行
{
    cout<<"恭喜上清华"<<endl;
}    

else    //其他情况
{
    cout<<"考入北大"<<endl;
}














system("pause");

  return 0;
}