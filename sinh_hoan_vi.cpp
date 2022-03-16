#include <iostream>
using namespace std;

void in(int a[], int n) //in ra mang n phan tu
{
	for(int i=0; i<n; i++)
	    cout<<a[i];
	cout<<" ";    
}

void sinh(int n) // sinh hoan vi
{
	int a[n];
	for(int i=0; i<n; i++)
	   a[i]=i+1;
	bool has_next = true;
	while(has_next)
	{
		in(a,n);
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
		int n;
		cin>>n;
		sinh(n);
		cout<<endl;
	}
	return 0;
}
