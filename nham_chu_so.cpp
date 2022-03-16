#include<iostream>
using namespace std;

long long get5_6(long long a) // doi chu so 5 thanh 6
{
	long long rs =0, exp =1;
	while(a>0)
	{
		long long m= a%10;
		if(m==5) m=6;
		rs +=m*exp;
		exp *=10;
		a/=10;
	}
	return rs;
}
long long get6_5(long long a) //doi chu so 6 thanh 5
{
	long long rs =0, exp =1;
	while(a>0)
	{
		long long m = a%10;
		if(m==6) m=5;
		rs +=m*exp;
		exp *=10;
		a/=10;
	}
	return rs;
}
int main()
{
	long long a,b;
	long long max,min;
	cin>>a>>b;
	min=get6_5(a)+get6_5(b);
	max=get5_6(a)+get5_6(b);
	cout<<min<<" "<<max;
}
