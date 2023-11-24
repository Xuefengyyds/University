#include<iostream>
using namespace std;
//time系统时间头文件包含
#include<ctime>
int main(){
//1、系统生成随机数
srand((unsigned int)time(NULL));
int num=rand()%100+1;  //生成0-99随机数，得加一

//添加随机数种子 作用利用当前系统时间生成随机数，防止每次随机数都一样




//cout<<num<<endl;


// num=rand()%100+1;
// cout<<num<<endl;
// num=rand()%100+1;
// cout<<num<<endl;




//2、玩家进行猜测
int val=0;

while(1)
{
    cin>>val;
    if(val>num)
{
    cout<<"猜测过大"<<endl;
}
else if(val<num)
{
    cout<<"猜测过小"<<endl;
}
else
{
    cout<<"猜对了恭喜"<<endl;
    break;  //利用改关键字退出循环
}
}

//3、判断玩家的猜测

//猜对 退出游戏



//猜错 提示猜测的结构 过大或者过小 重新返回第二部









system("pause");

  return 0;
}