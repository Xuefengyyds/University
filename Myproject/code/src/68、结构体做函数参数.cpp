#include<iostream>
using namespace std;
struct stu
{
    string name;
    int age;
    int score;
};
//打印学生信息的函数
void printstu(struct stu s)
{
    cout<<"子函数中 姓名:"<<s.name<<"年龄"<<s.age<<"分数"<<s.score<<endl;
}

void printstu2(struct stu * p)
{
    cout<<"子函数2"<<p->name<<p->age<<p->score<<endl;
}
int main(){
    //结构体做函数参数
    //将学生传入到一个参数中，打印学生身上的所有信息
    //创建一个结构体变量
    struct stu s;
    s.name="🐮";
    s.age=12;
    s.score=99;
    // cout<<s.name<<s.age<<s.score<<endl;
    //值传递的时候中修饰形参，实参不会改变，不想修改主函数的值
    //地址传递两个都会改变，地址存储的值变了，
printstu(s);
printstu2(&s);
    system("pause");
    return 0;
}