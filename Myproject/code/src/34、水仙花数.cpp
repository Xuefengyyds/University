#include<iostream>
using namespace std;
int main(){

//将所有的三位数进行输出（100-999）
int num=100;

do
{

int a=0;
int b=0;
int c=0;

a=num%10;
b=num/10%10;
c=num/100;

  if(a*a*a +b*b*b +c*c*c ==num )      //如果是水仙数才打印  //=是赋值  ==是相等
{
    cout<<num<<endl;
}
num++;
} 
while (num<1000);


//在所有三位数中找到水仙花数
//为什么num放上面和下面不一样？？？















system("pause");

  return 0;
}