#include<iostream>
using namespace std;
/*将成员属性设置为私有，可以自己控制读写程序*/

//成员属性设计为私有
//1.可以自己控制读写权限
//2.对于写可以检测数据的有效性

class Person
{
public:
    //设置姓名
    void setName(string name)
    {
        m_name =name;
    }
    //读姓名

    string getName()
    {
        return m_name;
    }

    //获取年龄
    int getage()
    {
        m_age=100;
        return m_age;
    }

    //设置年龄
    void setage(int age)
    {
        if(age<0||age>150) return;
        m_age = age;
    }
    //设置情人 只写
    void setLover(string lover)
    {
        m_Lover = lover ;
    }

private:
    //姓名  可读可写
    string m_name;
    //只读
    int m_age;
    //只写
    string m_Lover;
};


int main()
{
    Person p;
    p.setName("张三");
    cout<<"姓名为"<<p.getName();
    // p.m_age=18;  不可访问

    cout<<"年龄为"<<p.getage();

    // p.setLover("李泽");
    // cout<<"情人为"<<p.m_Lover<<endl; 不可访问，不可读，在类中没有设置
    return 0;
}