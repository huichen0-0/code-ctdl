#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t; 
	cin >> t;
	while (t--) 
	{
		int n; 
		cin >> n;
		int a[100000];
		for (int i = 0; i < n; i++)
		    cin >> a[i];
		sort(a, a + n);
		if (a[n - 1] == a[0])cout << -1 << endl;
		else {
			cout << a[0] << " ";
			for (int i = 1; i <n ; i++) 
			{
				if (a[i] != a[0]) 
				{
					cout << a[i] << endl;
					break;
				}
			}
		}
	}
}
