// 设计程序，将键盘输入的字符串逆序。
#include<iostream>
#include <cstring>
using namespace std;
char* f(char *s);   // 将指针s所指字符数组逆序后返回
int main(void)
{   
    char str[100];
    int i,j;
    cin.getline(str,100);
    char *p1,*p2;
     for(i=0,j=strlen(str)-1;i<strlen(str)/2;i++,j--)
    {      
        p1=&str[i];
        p2=&str[j];
        char temp;
        temp=*p2;
        *p2=*p1;
        *p1=temp;
    }
    cout<<str;
    system("pause");
    return 0;
}