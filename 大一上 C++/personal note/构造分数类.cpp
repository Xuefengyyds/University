# include <iostream>
# include <stdlib.h>
using namespace std;
class Fraction {  //构造Fraction类表示分数
public:
    Fraction(int n=0,int d=1):nume(n),deno(d) {simplify();}
    Fraction(double d);     //double类型转换Fraction构造函数
    Fraction(const string& str);    //string类型转换Fraction构造函数
    Fraction(const Fraction& f):nume(f.nume),deno(f.deno){} //复制构造函数
    void display();

private:
    void simplify();
    int nume ,deno;
};

Fraction::Fraction(const string& str): nume(0), deno(1)
{
    char buf[200];
    int i=str.find('/'), j=str.length()-i-1;
    if (i>=0)
    {
        str.copy(buf, i , 0); buf[i]=0;nume=atoi(buf);
        str.copy(buf, j , i+1);buf[j]=0; deno=atoi(buf);
    }
    simplify();
}

Fraction::Fraction(double d): nume(d),deno(1)
{
    d=d-nume;
    while (int(d*10)!=0) {
    nume=nume*10+int(d*10);
    deno=deno*10;
    d=d*10-int(d*10);
    }
    simplify();
}
void Fraction::display()
{
    if (deno!=0&&deno!=1&&deno!=nume) {
    cout<<nume<<'/'<<deno<<endl;
    }
    else cout<<nume<<endl;
}

void Fraction::simplify()
{
    int m, n, r, s=1;
    if(nume!=0&&deno!=0)
    {
        if(deno<0) s=-s, deno=-deno;
        if(deno<0) s=-s, nume=-nume;

        m=nume, n=deno;
        while(n!=0) r=m%n, m=n ,n=r;

        if(m!=0) nume=s*nume/m, deno=deno/m;
    }

    else nume=0, deno=1;
}

int main()
{
    Fraction a(1,2),b(0.25),c("6/9");
    a.display();
    b.display();
    c.display();

    return 0;
}