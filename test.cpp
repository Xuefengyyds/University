#include<iostream>
using namespace std;
int main(){
    double a[]={1,3,5,7,9};  

    // cout<<&a[0]<<'\t'<<&a[1];

    cout<<&a[3]-&a[2]<<endl;


    return 0;
}