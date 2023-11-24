#include<iostream>
using namespace std;
int main(){
//在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
//break结束整个循环，continue结束本次
//continue执行到本行，就不再执行后面的代码，而执行下一次循环

for(int i=0;i<100;i++)
{
    //如果是奇数输出，偶数不输出
    if(i%2==0)
    {
        continue;  //可以筛选条件，执行到此就不再向下循环，执行下一次循环
        //break会退出循环，而continue不会.continue会使整个循环终止，而不会退出循环
    }
    cout<<i<<endl;
}











system("pause");
return 0;
}