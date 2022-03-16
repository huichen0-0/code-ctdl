#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long a[1];
		long long max=0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0; i<n; i++)
		{
			max+=a[i]*i;
		}
		cout<<max<<endl;
	}
}
