#include<iostream>
   using namespace std;
   class MyClassA{
    protected:
       int a;
   public:
       MyClassA( ) { a=1;}
       void print(){cout<<a;}
   };
   class MyClassB:public MyClassA{
       int a;
   public:
       MyClassB( )  { a=2;}
       void print(){cout<<MyClassA::a<<a;}
   };
   int main()
   {
       MyClassB t;                //调用了构造函数，但先把2赋值给类自身的a
       MyClassA *p=&t;            //赋值的兼容性，访问的是A中的print函数
       p->print();
       t.print();
       system("pause");
       return 0;
   }