#include<iostream>
using namespace std;
int main(){
//实现数组元素逆置
//请声明一个5个元素的数组，并且将元素逆置
int arr[]={1,4,3,5,2,8};                //创建数组
cout<<"元素逆置前"<<endl;
for(int i=0;i<6;i++)
{
    cout<<arr[i]<<endl;
}
int start=0;                            //起始元素下标位置
int end=sizeof(arr)/sizeof(arr[0])-1;   //末尾元素下标
while (start<end)
{
   int temp=arr[start];                    //创建临时变量，start和end下标元素进行互换                                       
   arr[start]=arr[end];
   arr[end]=temp;
   start++;
   end--;
}
cout<<"数组逆置后的代码"<<endl;
for(int i=0;i<6;i++)
{
    cout<<arr[i]<<endl;
}
 //起始位置++ 结束位置减减
 

















system("pause");
  return 0;
}