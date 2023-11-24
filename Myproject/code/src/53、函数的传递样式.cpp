#include<iostream>
using namespace std;
//1无参无返
void test01()   //不需要传入参数
{
cout<<"this is test01"<<endl;
}

//2有参无返
void test02(int a)
{
    cout<<"this is test01 a="<<a<<endl;
}

//3无参有返
int test03()
{
    cout<<"this is testo3"<<endl;
    return 1000;
}

//4有参有返
int test04(int b)
{
    cout<<"this is test04 b="<<b<<endl;
    return b;
}


int main(){
test01();   //调用
test02(100);   //调用
test03();     //调用
int a=test03();
cout<<"a="<<a<<endl;

int c=test04(250);
cout<<"="<<c<<endl;










    system("pause");
    return 0;
}