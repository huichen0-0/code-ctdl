#include <iostream>
using namespace std;
int n, a[100],b[100];
void in(int a[], int n) //in ra mang n phan tu
{
	for(int i=0; i<n; i++)
	    cout<<a[i];
	cout<<" ";    
}
bool check()
{
	for(int i=0; i<n; i++)
	   if(b[i]!=a[i]) return false;
	return true;   
}
void sinh(int n) // thu tu hoan vi
{
	int dem=1;
	for(int i=0; i<n; i++)
	   a[i]=i+1;
	bool has_next = true;
	while(has_next)
	{
		if(check()==true)
		{
		   cout<<dem;
		   return;
	    }
	    dem++;
		int i=n-2;
		while(i>=0 && a[i] > a[i+1]) i--;
		if(i>=0)
		{
			int j= n-1;
			while(a[i]>a[j]) j--;
			swap(a[i], a[j]);
			int r= i+1, s=n-1;
			while(r<=s)
			{
				swap(a[r], a[s]);
				r++; s--;
			}
		}
		else has_next = false;
	
	   }   
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0; i<n; i++)
		   cin>>b[i];
		sinh(n);
		cout<<endl;
	}
	return 0;
}
