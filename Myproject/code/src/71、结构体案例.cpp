#include<iostream>
using namespace std;
//设计一个英雄的结构体
struct hero
{
    string name;
    int age;
    string sex;
};

//冒泡排序
void bubblesort(struct hero heroarr[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            //如果j大于j+1年龄，交换
            if(heroarr[j].age>heroarr[j+1].age)
            {
                struct hero temp =heroarr[j];
                heroarr[j] = heroarr[j+1];
                heroarr[j+1]=temp;
            }
        }
    }
}


void print(struct heroarr[] ,int len)
{
    for(int i=0;i<len;i++)
    {
         cout<<heroarr[i].name<<heroarr[i].age<<heroarr[i].sex<<endl;
    }

}
int main(){


//创建数组存放五名英雄
struct hero heroarr[5]=
{
    {"刘备",44,"男"},
    {"关羽",22,"男"},
    {"张飞",34,"男"},
    {"赵云",12,"男"},
    {"迪藏",31,"女"}
};
int len =sizeof(heroarr)/sizeof(heroarr[0]);
//对数组进行排序，按照年龄进行升序排列
bubblesort(heroarr,len);


for(int i=0;i<5;i++)
{
   
}
print(heroarr,len);




system("pause");
return 0;


}