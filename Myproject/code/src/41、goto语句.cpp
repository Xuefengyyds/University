#include<iostream>
using namespace std;
int main(){
//goto 标记（不推荐，影响代码结构）

//go to语句2
cout<<"1"<<endl;
cout<<"2"<<endl;
goto FLAG;
cout<<"3"<<endl;
cout<<"4"<<endl;
cout<<"5"<<endl;
FLAG:   // 建立标记，不建议
cout<<"6"<<endl;











    system("pause");
    return 0;
}