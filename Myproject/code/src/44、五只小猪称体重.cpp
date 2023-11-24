#include<iostream>
using namespace std;
int main(){


//访问数组每个元素，如果数组中的元素比我认定的最大值大，那么更新最大值
//1、创建五只小猪体重的数组
//先认定一个最大值
int arr[5]={300,200,534,400,250};
int max=0;
for(int i=0;i<5;i++)
{
    // if(arr[i]>max)
    // {
    //     max=arr[i];
    // }
    arr[i]>max?max=arr[i]:arr[i];
  
}
//使用三目运算符



//2、从数组中找到最大值


//3、打印最大值
cout<<"最重的小猪体重："<<max<<endl;














    system("pause");
    return 0;
}