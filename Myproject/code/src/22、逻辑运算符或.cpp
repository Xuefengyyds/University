#include<iostream>
using namespace std;
int main(){
//或，只要一个真就真，两个假就为假

int a=10;
int b=10;
cout<<(a || b)<<endl;


a=10;
b=0;
cout<<(a || b)<<endl;

a=0;
b=0;
cout<<(a || b)<<endl;


//逻辑或，同假为假，其余为真
system("pause");

  return 0;
}