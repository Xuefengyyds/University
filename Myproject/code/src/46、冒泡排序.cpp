#include<iostream>
using namespace std;
int main(){
//利用冒泡排序实现生序序列
int arr[]={4,2,8,0,5,7,1,3,9};
cout<<"排序前："<<endl;
for(int i=0;i<9;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
//开谁冒泡排序，排序的总轮数，等于元素个数-1，每轮对比次数=元素个数-排序轮数-1（当轮元素-1）
for(int i=0;i<9-1;i++)     //也可以利用代码算出来
{
    //内层循环对比
    for(int j=0;j<9-i-1;j++)
    {    //如果第一个数字比第二个数字大，实现交换两个数字
      if(arr[j]>arr[j+1])
      {
        int temp=arr[j];
        arr[j]=arr[j+1];    //交换
        arr[j+1]=temp;
      }          
    }
}
cout<<"排序后"<<endl;
for(int i=0;i<9;i++)
{
    cout<<arr[i]<<" ";
}









system("pause");

  return 0;
}