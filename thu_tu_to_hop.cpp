#include <iostream>
using namespace std;
int n,k,a[100],b[100];
void in(int a[], int n) //in ra mang n phan tu
{
	for(int i=0; i<n; i++)
	    cout<<a[i];
	cout<<" ";    
}
bool check()
{
	for(int i=0; i<k; i++)
	    if(a[i]!=b[i]) return false;
	return true;    
}
void sinh() // thu tu to hop
{
    int dem=1;
	for(int i=0; i<k; i++)
	   b[i]=i+1;
	bool has_next = true;
	while(has_next)
	{
		if(check()==true) 
		{
			cout<<dem;
			return;
		}
        dem++;
		int i=k-1;
		while(i>=0 && b[i] == n-k +1 +i) i--;
		if(i>=0)
		{
			b[i]+=1;
			for(int j=i+1; j<=k; j++)
			    b[j]=b[i]+j-i;
		}
		else has_next = false;
	   }   
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0; i<k; i++)
		    cin>>a[i];
		sinh();
		cout<<endl;
	}
	return 0;
}
