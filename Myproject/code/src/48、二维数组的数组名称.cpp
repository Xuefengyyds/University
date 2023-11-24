#include<iostream>
using namespace std;
int main(){
//二维数组的名称用途

// double是占八个字节

//1、可以查看占有内存空间大小
int arr[2][3]=
{
    {1,2,3},
    {4,5,6}
};
cout<<"二维数组占有内存空间为"<<sizeof(arr)<<endl;
cout<<"二维数组第一行占用内存为："<<sizeof(arr[0])<<endl;
cout<<sizeof(arr[0][0])<<endl;
cout<<"行数"<<sizeof(arr)/sizeof(arr[0])<<endl;
cout<<"列数"<<sizeof(arr[0])/sizeof(arr[0][0])<<endl;


//2、可以查看二维数组的首地址
cout<<"二维地址的首地址为"<<(long int)arr<<endl;  //()十六进制转为十进制
cout<<"二维数组第一行首地址为"<<(long int)arr[0]<<endl;
cout<<"二维数组第二行首地址为"<<(long int)arr[1]<<endl;  //差十二个字节，一个数据4个字节

cout<<"第一个元素的首地址"<<(long int)&arr[0][0]<<endl;   //访问元素的首地址要用&取值符
cout<<"第二个元素的首地址"<<(long int)&arr[0][1]<<endl; 



    system("pause");
    return 0;
}