#include<iostream>
using namespace std;
int main(){
    /*
    二位数组就是在一维数组中加一维
    二位数组中有四种定义方式（以矩阵方式存在）
    */
//四种定义方式 通常推荐第二种的定义方式
//1.数据类型 数组名字[行数][列数]；
int arr[2][3];
arr[0][0]=1;
arr[0][1]=2;
arr[0][2]=3;
arr[1][0]=4;
arr[1][1]=5;
arr[1][2]=6;

// cout<<arr[0][0]<<endl;
// cout<<arr[0][1]<<endl;
//外层循环打印行数，内层循环打印列数
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<arr[i][j]<<endl;
    }
}


//2、数据类型 数组名[][]={(),()};
int arr2[2][3]=
{
    {1,2,3},
    {4,5,6}
};
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
}

//3、数据类型 数组名[][]={}
int arr3[2][3]={1,2,3,4,5,6} ;  //程序能划分出来
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<arr3[i][j]<<endl;
    }
}
//4、数组类型 数组名[][列数]={ }
int arr4[][3]={1,2,3,4,5,6};//因为写了列数，程序能自动分别出来
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<arr3[i][j]<<" ";
    }
    cout<<endl;
}


    system("pause");
    return 0;
}