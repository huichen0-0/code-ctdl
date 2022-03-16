#include<iostream>
using namespace std;

void sinh(int* A, int n) 
{
	bool has_next = true;
	for (int i = n - 2; i >= 0; i--) 
	{
		if (A[i] <= A[i + 1]) 
		{
				has_next = false;
				int j = n-1;
				while (A[j] < A[i]) j--;
				swap(A[j] , A[i]);
				int r = i + 1, s = n - 1;
				while (r < s )
				{
					swap(A[r], A[s]);
					 r++; s--;
				}
				break;
		}
	}
	if (has_next)
	{
		for (int i = 0; i < n; i++)cout << i + 1 << " ";
	}
	else
		for (int i = 0; i < n; i++)cout << A[i] << " ";
}


int main() // hoan vi ke tiep
{
	int t; 
	cin >> t;
	while (t--) 
	{
		int n; 
		cin >> n;
		int A[1000];
		for (int i = 0; i < n; i++) // hoan vi ban dau
		    cin >>A[i];
		sinh(A, n);
		cout << endl;
	}
}
