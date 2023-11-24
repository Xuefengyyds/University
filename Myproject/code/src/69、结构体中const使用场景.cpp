#include<iostream>
#include<string>
using namespace std;
struct stu
{
    string name;
    int age;
    int score;
};
//将函数中的形参改为指针，可以减少内存空间，不会复制新的副本出来
void printstu(const struct stu *s)    //加入const之后,一旦有修改的操作就会报错，可以防止我们误操作
{                                     //const变成常量，不能修改
    
    cout<<s->name<<s->age<<s->score<<endl;
}
int main(){
struct stu s={"李四",12,4444};
printstu(&s);
cout<<s.age<<endl;
system("pause");

  return 0;
}