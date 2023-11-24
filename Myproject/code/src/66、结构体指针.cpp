#include<iostream>
using namespace std;
#include<string>
struct student
{
    string name;
    int age;
    int score;
};
int main(){
//创建学生结构体变量
struct student s1={"无",1,2};
//通过指针指向结构体变量
struct student*p=&s1;  //通过指针访问地址
//通过指针访问结构体变量中的数据
cout<<p->name<<(*p).age<<(*p).score<<endl;    //(*p).name====p->name
//通过指针访问结构体里属性

    system("pause");
    return 0;
}