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
		vector<int> m(n);
		int a[10] = { 0 };
		for (int i = 0; i < n; i++) 
		{
			string s; 
			cin >> s;
			for (int i = 0; i < s.length(); i++)
				a[s[i] - '0']++;
		}
		for (int i = 0; i < 10; i++)
			if (a[i])cout << i << " ";
		cout << endl;
	}
}
