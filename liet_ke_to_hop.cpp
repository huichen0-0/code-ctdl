#include <bits/stdc++.h>
using namespace std;
int n,k,a[100],b[20],c[20];
void in(int a[], int n) //in ra mang n phan tu
{
	for(int i=0; i<n; i++)
	    cout<<a[i];
	cout<<" ";    
}

void sinh() // sinh to hop
{
	int x=1;
	b[0]=a[0];
    for(int i=1; i<n; i++)
    if(a[i]!=a[i-1]) 
	{
	    b[x]=a[i];
	    c[x]=a[i];
	    x++;
	}    
	bool has_next = true;
	while(has_next)
	{
		in(b,k);
		int i=k-1;
		while(i>=0 && b[i] == c[n-k +1 +i]) i--;
		if(i>=0)
		{
			b[i]=c[i+1];
			for(int j=i+1; j<=k; j++)
			    b[j]=c[j-i];
		}
		else has_next = false;
	   }   
}
int main() 
{
		cin>>n>>k;
		for(int i=0; i<n; i++)
		    cin>>a[i];
		sort(a, a+n);    
		sinh();
		cout<<endl;
}
