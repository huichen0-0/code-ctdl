#include <iostream>
using namespace std;

void in(int a[], int n) // in ra mang n phan tu
{
	for(int i=0; i<n; i++)
	    cout<<a[i];
	cout<<endl;    
}
int sum(int a[], int n)
{
	int s=0;
	for(int i=0; i<n; i++)
	{
		s+=a[i];
	}
	return s;
	    
}
void sinh(int n, int k) //xau nhi phan co k bit 1
{
	int a[n];
	for(int i=0; i<n; i++)
	   a[i]=0;
	bool has_next = true;
	while(has_next)
	{
		if(sum(a,n)==k) in(a,n);
		int i=n-1;
		while(i>=0 && a[i] == 1) 
		{
			a[i]=0;
			i--;
		}
		if(i>=0)
		{
			a[i]=1;
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
		sinh(n,k);
}
}
