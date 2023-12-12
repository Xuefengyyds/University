#include<iostream>
using namespace std;
int main(){
 int x=1, y=1, k;
    k=x++||++y; 
    cout<<x<<y<<k;
    return 0;
}