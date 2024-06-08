#include<iostream>
using namespace std;

class Rank
{
private:
    double *a;  //动态内存存放成绩
    int *b;     //动态内存存放名次
    int len;

public:
    Rank(double *x,int n);
    ~Rank();
    void number();
    void showdate();
    void shounumber();
};

Rank::Rank(double *x,int n)
{
    len=n;
    a=new double[len];
    b=new int[len];
    for(int i=0;i<len;i++)
    {
        a[i]=x[i];
        b[i]=1;
    }
    
}

Rank::~Rank()
{
    delete [] a;
    delete [] b;
}

void Rank::number()
{
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(a[i]<a[j])
            {
                b[i]++;
            }
        }
    }
}

void Rank::showdate()
{
    for(int i=0;i<len;i++)
    {
        cout<<a[i]<<'\t';
    }
    cout<<endl;
}

void Rank::shounumber()
{
    for(int i=0;i<len;i++)
    {
        cout<<b[i]<<'\t';
    }
    cout<<endl;
}


int main(){

    double a[]={95,93,94,90,97,93,95,96,100,60,75,79,88,80};
    int len=sizeof(a)/sizeof(a[0]);

    Rank test(a,len);
    test.number();
    test.showdate();
    test.shounumber();
    test.~Rank();

    return 0;
}