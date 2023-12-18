#include<iostream>
using namespace std;
class student
{
    //类中的属性和行为 我们统一称为 成员
    //属性 成员属性 成员变量
    //行为 成员函数 成员方法
public:
    //属性
    string m_Name;
    int m_id;
    
    //行为
public:
    void showStudent()
    {
        cout<<"姓名"<<m_Name<<"学号"<<m_id;
    }

    void setName(string name)
    {
        m_Name = name;
    }

    void setid(int id)
    {
        m_id=id;
    }
};
int main(){
    //创建一个具体学生实例化对象
    student s1;

    s1.m_Name ="张三";
    s1.m_id = 1;
    
    s1.showStudent();

    student s2;
    s2.m_Name="李四";
    s2.m_id=2;
    s2.showStudent();

    student s3;
    s3.setName("王五");
    s3.setid(20);
    s3.showStudent();
    return 0;
}