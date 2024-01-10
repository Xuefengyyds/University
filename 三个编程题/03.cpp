#include <iostream>
using namespace std;

class Num
{
	private:
			int a[20];
			int count;
	public:
			Num(){	count=0;	}
			
			int digitsum(int x);
			void fun();
			void print();
};

int Num::digitsum(int x)
{
	int sum=0;
	while(x)
	{
		sum+=x%10;
		x/=10;
	}
	return sum;
}

void Num::fun()
{	
	
	for(int i=1;i<=20;i++)
		{
			if(digitsum(i)==digitsum(i*i))
			{	
				a[count++]=i;
                a[count++]=i*i;				
				
			}
		}
}

void Num::print()
{	
	cout<<"符合条件的整数及其平方数"<<endl;
	for(int i=0;i<count;i++)
	{
		cout<<a[i]<<'\t';
		if((i+1)%2==0) cout<<endl;
	}
}

int main()
{
	Num test;
	test.fun();
	test.print();
	return 0;
}