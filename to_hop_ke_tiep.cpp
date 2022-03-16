#include<iostream>
using namespace std;

void sinh(int* A, int n, int k, int*B) 
{
	bool has_next1 = true;
	for (int i = k - 1; i >= 0; i--) 
	{
		if (A[i] != n - k + i + 1) 
		{
			A[i]++;
			has_next1 = false;
			for (int j = i + 1; j < k; j++)
			   A[j] = A[j - 1] + 1;
			break;
		}
	}
	if (has_next1)
		cout << k;
	else 
	{
		int dem = 0;
		for (int i = 0; i < n; i++) 
		{
			bool has_next2 = true;
			for (int j = 0; j < n; j++)
			 {
				if (A[i] == B[j])
					has_next2=false;
			}
			if (has_next2)
				dem++;
		}
		cout << dem;
	}
}

int main() // to hop ke tiep
{
	int t; 
	cin >> t;
	while (t--) 
	{
		int n, k; 
		cin >> n >> k;
		int A[1000], B[1000];
		for (int i = 0; i < k; i++) // to hop ban dau
		{
		cin >>A[i];
		B[i] = A[i];
	    }
		sinh(A, n, k, B);
		cout << endl;
	}
}
