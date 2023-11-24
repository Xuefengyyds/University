#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6};
cout<<"第一个元素为："<<arr[0]<<endl;
int*p=arr;
cout<<"利用指针来访问第一个元素"<<*p<<endl;
p++; //让指针便宜四个字节
cout<<"利用指针访问第二个元素"<<*p<<endl;


cout<<"利用指针来便利数组"<<endl;
int *p2=arr;
for(int i=0;i<6;i++)
{
    // cout<<arr[i]<<endl;
    cout<<*p2<<endl;
    p2++;
}


    system("pause");
    return 0;
}