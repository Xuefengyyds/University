#include<iostream>
using namespace std;
class Base{
    public: virtual void print(){cout<<"Base"<<endl;}
};
class Derived :public Base{
    public: void print(){cout<<"Derived"<<endl;}
};
void display(Base *p,void(Base::*pf)())
{(p->*pf)();}

int main(){
    Derived d ; Base b;
    display(&d,&Base::print);   //输出Derived
    display(&b,&Base::print);   //输出Base
}