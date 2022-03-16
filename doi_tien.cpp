#include<iostream>
using namespace std;


int main()
{
	int t;
	cin>>t;
	int money[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int size=sizeof(money)/sizeof(money[0]);
	while(t--)
	{
		int n;
		cin>>n;
		int count=0;
		while(n>0)
		{
			for(int i=size-1; i>=0; i--)
			{
				while(n >= money[i]) 
				{
					n-=money[i];
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
}
