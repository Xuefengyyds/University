#include<iostream>
using namespace std;

//访问权限 三种 
/*1.公共权限 public 成员在类内可以访问 类外可以访问
  2.保护权限 protected 成员 类内可以访问 类外不可以     儿子可以访问父亲中的保护内容
  3.私有权限 private 成员 类内可以访问 类外不可以       儿子不可以访问父亲的私有内容
*/
class Person
{   
    public:
    string m_Name;

    protected:
    string m_Car;

    private:
    int m_Password;

public:
    void func()
    {
        m_Name="张三";
        m_Car="拖拉机";
        m_Password=1314;
    }
};
int main(){
    Person p1;

    p1.m_Name="李四";
    // p1.m_Car="奔驰";    保护权限的内容，在类外访问不到
    //p1.m_Password        私有权限的内容，在类外不可访问

    p1.func();


    return 0;
}