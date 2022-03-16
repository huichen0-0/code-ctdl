#include<bits/stdc++.h>
using namespace std;
int n, a[15], ok=0;

void in(){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<" ";
}
void sinh(){
	int i=n-1, j;
	while(i>0 && a[i]<a[i+1]) i--;
	if(i==0) ok=1;
	else {
		j=n;
		while(a[j]>a[i]) j--;
		swap(a[j],a[i]);
		int c=i+1, d=n;
		while(c<d){
			swap(a[c],a[d]);
			c++;
			d--;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ok=0;
		for(int i=1;i<=n;i++) a[i]=n-i+1;
		while(!ok){
			in();
			sinh();
		}
		cout<<endl;
	}
}
