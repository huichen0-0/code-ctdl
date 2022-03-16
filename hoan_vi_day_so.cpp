#include <bits/stdc++.h>
using namespace std;
int n, a[100];
void in() //in ra mang n phan tu
{
	for(int i=0; i<n; i++)
	    cout<<a[i]<<" ";
	cout<<endl;    
}

void sinh() //  hoan vi phan tu
{
    sort(a, a+n);	
	bool has_next = true;
	while(has_next)
	{
		in();
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
		cin>>n;
		for(int i=0; i<n; i++) cin>>a[i];
		sinh();
}
