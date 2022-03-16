#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t; 
	cin >> t;
	while (t--) 
	{
		int n, x; 
		cin >> n >> x;
		int a[1000000];
		set<int> X;
		for (int i = 0; i < n; i++) 
		{
			cin >> a[i];
			X.insert(a[i]);
		}
		if (X.count(x) == 0)cout << -1 << endl;
		else cout << 1 << endl;
	}
}
