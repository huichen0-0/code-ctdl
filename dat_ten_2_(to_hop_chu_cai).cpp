#include <iostream>
using namespace std;

void in(int a[], int n) //in ra mang n phan tu
{
	for(int i=0; i<n; i++)
	    cout<<(char)(a[i]+64);
	cout<<endl;    
}

void sinh(int k, int n) // sinh to hop
{
	int a[k];
	for(int i=0; i<k; i++)
	   a[i]=i+1;
	bool has_next = true;
	while(has_next)
	{
		in(a,k);
		int i=k-1;
		while(i>=0 && a[i] == n-k +1 +i) i--;
		if(i>=0)
		{
			a[i]+=1;
			for(int j=i+1; j<=k; j++)
			    a[j]=a[i]+j-i;
		}
		else has_next = false;
	   }   
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		sinh(k,n);
		cout<<endl;
	}
	return 0;
}
