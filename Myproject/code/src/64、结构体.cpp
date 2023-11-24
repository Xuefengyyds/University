#include<iostream>
using namespace std;
#include<string>
   //1、创建学生的数据类型 ：学生包括（姓名，年龄，分数）
    struct student //自定义数据类型，一些类型集合组成的一个数据类型
           //语法 struct 类型名称{成员列表}
    {
        string name;
        int age;  
        int score;/* data */
    }s3;
int main(){
    //结构体属于用户自定义的数据类型，允许用户存储不同的数据结构
    //语法：struct 结构体名{结构体成员列表}；
    //2、通过学生类型创建具体学生
    /*1、struct student s1
      2、struct student s2
      3、在定义结构体时顺便创建结构体变量*/


      //struct的关键字可以省略掉的
      struct student s1;
      s1.name="邬昱豪",     //给s1属性赋值， 通过.访问结构体变量中的属性
      s1.age=19;
      s1.score=150;
      cout<<s1.name<<s1.age<<s1.score<<endl;
 //2、struct student s2={}
 struct student s2={"里斯",33,44};
      cout<<s2.name<<s2.age<<s2.score<<endl;
    
//3在定义结构体时顺便创建结构体变量
s3.name="🐣";
s3.age=1;
s3.score=232;
     cout<<s3.name<<s3.age<<s3.score<<endl;
    system("pause");
    return 0;
}