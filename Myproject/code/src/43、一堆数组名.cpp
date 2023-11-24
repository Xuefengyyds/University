#include<iostream>
using namespace std;
int main(){
//一堆数组名称的用途
//1.可以统计整个数组在内存中的长度
//2.可以获取数组在内存中的首地址


//int arr[]={1,2,3,4,5}

// for(int i=0;i<5;i++)
// {
//     cout<<arr[i]<<endl;
// }

// cout<<sizeof(arr)<<endl;
// cout<<arr<<endl;
//1、可以通过数组名统计整个数组占有内存的大小
int arr[10]={1,2,3,4,5,6,7,8,9,10};
cout<<"整个数组长度占用内存空间为"<<sizeof(arr)<<endl;
cout<<"统计每个元素所占有内存空间为："<<sizeof(arr[1])<<endl;
cout<<"数组中元素的个数为"<<sizeof(arr)/sizeof(arr[0])<<endl;

//通过数组名查看内存的首地址
cout<<"首地址:"<< (long int)arr<<endl;
cout<<"数组中第一个元素地址为："<<(long int)&arr[0]<<endl;   //数组的首地址和第一个元素首地址都一样
cout<<"第二个元素地址"<<(long int)&arr[1]<<endl;    //差四个字节，

//数组名是一个常量，不可以进行赋值，







    system("pause");
    return 0;
}