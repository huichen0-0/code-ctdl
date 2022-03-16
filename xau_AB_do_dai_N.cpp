#include <iostream>
using namespace std;

void in_mang(int a[], int n)
{
	for(int i=0; i<n; i++)
	    cout<<(char)(a[i]+65);
	cout<<" ";	    
}

void sinh_xaunhiphan(int n)
{
	int a[n];
	for(int i=0; i<n; i++)
	   a[i]=0;
	bool has_next = true;
	while(has_next)
	{
		in_mang(a,n);
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
		int n;
		cin>>n;
		sinh_xaunhiphan(n);
		cout<<endl;
}
}
