#include<iostream>
#include<string>
using namespace std;
//1、定义一个结构体
struct student
{
   string name;
   int age;
   int score; /* data */
};

int main(){
struct student array[3]=
{
    {"张三",12,23},
    {"李四",1,45},
    {"王五",3,5}
};//初始化，后面仍然可以赋值
for(int i=0;i<3;i++)
{
    cout<<"姓名"<<array[i].name
    <<array[i].age
    <<array[i].score<<endl;
}



system("pause");

  return 0;
}