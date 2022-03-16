#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n; 
	cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++)
	    cin >> a[i];
	for (int i = 1; i <= n; i++)
	{
		sort(a, a + i);
		cout << "Buoc " << i-1 << ": ";
		for (int j = 0; j < i; j++)cout << a[j] << " ";
		cout << endl;
	}
	
}


