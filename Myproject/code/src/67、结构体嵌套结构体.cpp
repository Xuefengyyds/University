#include<iostream>
using namespace std;
#include<string>
//定义学生的结构体
struct stu
{
    string name;
    int age;
    int score;
};

struct tea
{
    int id;
    string name;
    int age;
    struct stu stu1;    //辅导学生
};
int main(){

tea t;
t.id=2;
t.name="老王";
t.age=50;
t.stu1.name="小王";
t.stu1.age=12;
t.stu1.score=20;
cout<<t.name
<<t.id
<<t.age
<<t.stu1.name
<<t.stu1.age
<<t.stu1.score<<endl;










    system("pause");
    return 0;
}