#include<iostream>
using namespace std;
int main(){

//嵌套，if里的if

int score=0;
//1、提示输入一个分数
cout<<"请输入高考分数"<<endl;
cin>>score;
//2、显示高考分数
cout<<"你的高考分数为："<<score<<endl;
//3、判断
/*
如果大于600一本
大于700 北大
大于650 清华
其余人大
*/
if(score>600)
{
    cout<<"恭喜你考入一本"<<endl;
    if(score>700)
    {
        cout<<"考入北大"<<endl;
    }
    else if(score>650)
    {
        cout<<"考入清华"<<endl;
    }
    else
    {
        cout<<"考入人大"<<endl;
    }
}


//如果大于500二本
else if(score>500)
{
    cout<<"考入二本"<<endl;
}

else
{
    cout<<"没书读"<<endl;
}

system("pause");

  return 0;
}