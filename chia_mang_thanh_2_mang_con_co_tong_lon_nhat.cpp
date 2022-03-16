#include<iostream>
#include<algorithm>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0; i<n; i++)  cin>>a[i];
		sort(a, a+n);
		int m = min(k, n-k);
		int sum1=0, sum2=0;
		for(int i=0; i<n; i++)
		    if(i<m)
		        sum2+=a[i];
		    else
			    sum1+=a[i];
		cout<< sum1-sum2<<endl;		    
	}
}
