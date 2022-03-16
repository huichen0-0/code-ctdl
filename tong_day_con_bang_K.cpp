#include<iostream>
using namespace std;

void sinh(int*a,int n, int k, int*b)  //tap con co tong phan tu = K
{
	for (int i = 0; i < n; i++)  a[i] = 0;
	int xx = 0;
	while (1) 
	{
		int sum = 0;
		for (int i = 0; i < n; i++) 
		{
			sum += a[i] * b[i];
		}
		if (sum == k) 
		{
			xx++;
			for (int i = 0; i < n; i++) 
			{
				if (a[i] == 1)  cout << b[i] << " ";
			}
			cout << endl;
		}
		int i = n - 1;
		while (i >= 0 && a[i] == 1) 
		{ 
		   a[i] = 0;
		   i--; 
		}
		if (i < 0) 
		{
			cout << xx << endl;
			return;
		}
		if (i >=0) a[i] = 1;
	}
}
int main() {
	int n,k;
	cin >> n >> k;
	int a[100], b[100];
	for (int i = 0; i < n; i++)  cin >> b[i];
	sinh(a,n,k,b);
}
