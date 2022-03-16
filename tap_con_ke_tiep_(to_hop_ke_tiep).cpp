#include<iostream>
using namespace std;

void sinh(int*a, int n,int k) // to hop ke tiep
{
	bool xx=0;
	for (int i = k - 1; i >= 0; i--) 
	{
		if (a[i] != n - k + i+1) 
		{
			a[i]++;
			xx = 1;
			for (int j = i + 1; j < k; j++) a[j] = a[j - 1] + 1;
			break;
		}
	}
	if (a == 0)
		for (int i = 0; i < k; i++)cout << i + 1 << " ";
	else
		for (int i = 0; i < k; i++)cout << a[i] << " ";
	cout << endl;
}

int main() 
{
	int t; 
	cin >> t;
	while (t--) 
	{
		int n, k; 
		cin >> n >> k;
		int a[1000];
		for (int i = 0; i < k; i++)  cin >> a[i];
		sinh(a, n, k);
	}
}
