#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n; 
	cin >> n;
	int a[1000];
	int xx = 1;
	for (int i = 0; i < n; i++)
	    cin >> a[i];
	for (int i = 1; i < n; i++) 
	{
		int x = 0;
		for (int j = 0; j < n - 1; j++) 
		{
			if (a[j] > a[j + 1]) 
			{
				swap(a[j], a[j + 1]);
				x++;
			}
		}
		if (x) {
			cout << "Buoc " << xx++ << ": ";
			for (int k = 0; k < n; k++)cout << a[k] << " ";
			cout << endl;
		}
	}
}
