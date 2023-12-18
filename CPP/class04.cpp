#include <iostream>
using namespace std;
/*
    class和struct的区别
    struct的默认权限是公共 public
    class 的默认权限是 private
*/
class C1
{
    int m_name;
};

struct C2
{
    int m_name;
};

int main(){
    C1 c1;
    C2 c2;
    // c1.m_name;
    c2.m_name;
    return 0;
}