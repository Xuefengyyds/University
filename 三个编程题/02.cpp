#include<iostream>
#include"string.h"
using namespace std;

/*
    1、当指针使⽤了动态空间时，需考虑动态空间的⼤⼩是否合理？ （1）⾸先在构造函数中要为指针分配⼤⼩
合理的动态空间。 （2）以后在使⽤动态空间时： ①若动态空间够⽤，可直接使⽤原来的存储空间，如题⽬
中的第⼀种情况。 ②若动态空间不够⽤，需释放原来的存储空间，然后重新分配动态空间，如题⽬中的第⼆
种情况。 2、当类的数据成员指针使⽤了动态空间时，必须重新定义拷⻉构造函数，否则会引起内存空间使
⽤出错，通常需： （1）给当前对象（新建⽴的对象）分配与参数对象（已有对象）⼤⼩⼀样的动态空间。
（2）对动态内存空间（数组）赋值，切忌对指针赋值： ①字符数组通常⽤字符串拷⻉函数赋值； ②⾮字符
数组通常⽤循环语句逐个元素赋值。
中间可以定义其他变量以便于完成程序
*/

class String{
public:
String(char*s=NULL); // ⽤参数初始化str
String(String&); // 拷⻉构造函数
~String(); // 释放动态空间
void replace(char *p,int pos); // 将str中第pos个位置后的字符替换为参数字符串
void show(); // 输出str
private:
char *str; // 成员字符串
};

String::String(char *s)
{  
    
    if(s==0)    str=nullptr;
    else
    {
        int len=strlen(s);
        str=new char[len+1];
        strcpy(str,s);
    }
}

void String::replace(char *p,int pos) // 将str中第pos个位置后的字符替换为参数字符串
{
    //这里分情况讨论，由简单到难，第一种pos的位置大于str的元素，那么把这两个连接起来
    int len=strlen(str);
    if(pos>len)
    {
        char *s;
        s=new char[len+pos+1];
        strcpy(s,str);
        strcat(s,p);
        delete [] str;
        str=s;
    }
    //第二种情况，pos的位置小于str的元素，且最后的元素个数不超过原有个数
    else if(pos<len)
    {   
        int len_p=strlen(p);
        if(pos+len_p<len)
        {
            char *s=str+pos;
            while(*p)
            {
                *s=*p;
                s++;
                p++;               
            }
            
        }
        else
        {
            char *s;
            s=new char[pos+strlen(p)];
            strcpy(s,str);

            char *s1=s+pos;
            while(*p)
            {
                *s1=*p;
                s1++;
                p++;               
            }

            delete [] str;
            str=s;
        }
    }


}


void String::show()
{
	if(str)  cout<<str<<endl;
}


String::~String()
{
    delete [] str;
}

String::String(String & t)
{
    str = new char[strlen(t.str) + 1];
        strcpy(str, t.str);
}


int main()
{
String test1("123456789"),test2(test1),test3(test1);
cout<<"原字符串为：";
test1.show();
test1.replace("abcde",3);
cout<<"替换后的字符串为：";
test1.show();
cout<<"原字符串为：";
test2.show();
test2.replace("abcdefghijk",3);
cout<<"替换后的字符串为：";
test2.show();
cout<<"原字符串为：";
test3.show();
test3.replace("abcde",15);
cout<<"替换后的字符串为：";
test3.show();
system("pause");
return 0;
}