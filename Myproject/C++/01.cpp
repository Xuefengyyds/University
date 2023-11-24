//template <模板形参表> 返回类型 函数名(){}
/*
    typename 参数名，......  ，
    class 类型参数名1，.....  ，
*/
#include <iostream>
using namespace std;
template<typename T>T abs(T x)
{
    return x<0?-x:x;
}
int main(){

    int n=-5;
    cout<<abs(n)<<endl;

    system("pause");
    return 0;
}