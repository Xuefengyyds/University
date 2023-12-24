#include <cmath>
#include <iostream>
#include "string.h"
using namespace std;
class Point{
    public:
    double x,y;
    public:
    Point(double a,double b):x(a),y(b){}
    void print(){ cout<<"("<<x<<','<<y<<")";}
};

class Distance:public Point{
    public:
    Point  p;
    Distance(int a,int b,int c,int d):Point(a,b),p(c,d){}
    double distance;
    void function(){distance=sqrt((p.x-x)*(p.x-x)+(p.y-y)*(p.y-y));}
    void pf(){cout<<distance;}

};
int main(){
    Distance test(2,2,1,1);
    test.function();
    test.pf();
    test.print();
    test.p.print();
 
    return 0;
}