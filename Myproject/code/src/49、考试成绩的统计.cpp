#include<iostream>
using namespace std;
#include<string>
int main(){
    //1.创建一个二维数组，三行三列
    int scores[3][3]=
    {
        {100,100,100},
        {90,50,100},
        {60,70,80}
    };

    string names[3]={"张三","李四","王五"};   //要写一个string的头文件，不过新版本不需要了
    //2.统计每个人的总和分数
    for(int i=0;i<3;i++)
    {
        int sum=0;   //统计分数总和
        for(int j=0;j<3;j++)
        {
            sum+=scores[i][j];     //x+=y ,意思是x=x+y
            cout<<scores[i][j]<<" ";
        }
        cout<<endl;
        cout<<names[i]<<"总得分为："<<sum<<endl;    //
    }
    system("pause");
    return 0;
}