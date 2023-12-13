#include<iostream>
using namespace std;
int main(){

 float x=2.5;
    char c(65);
    int y=x;              // ①
    int & r;                // ②
    int &rc=c;           // ③
    float &px=& x;     // ④
    char *pc=c;          // ⑤

	system("pause");
    return 0;
}