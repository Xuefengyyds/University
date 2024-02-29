#include<iostream>
using namespace std;
//写一个常量
const double PI=3.1415926;
/*面向过程的三大特性为：封装 继承 多态
        C++认为万事皆为对象，对象上有其属性和行为
        对象可以抽象为类

        1.封装
        将属性和行为作文一个整体，表现生活中的事物
        将属性和行为加以权限控制
    
    */
//设计一个圆类，求圆的周长
//圆求周长的公式：2*PI*半径
class Circle                    //设计一个类
{
    //访问权限
    // 公共权限
public:
    //属性 半径
    int m_r;

    //行为 获取圆的周长
    double calculatezc()
    {
        return 2*PI*m_r;
    }
};

int main(){
    //通过圆类 创建具体的圆(对象)
    Circle c1;
    //给圆对象的属性进行赋值
    c1.m_r =10;

    cout<<"圆的 周长为"<<c1.calculatezc()<<endl;

    return 0;
}