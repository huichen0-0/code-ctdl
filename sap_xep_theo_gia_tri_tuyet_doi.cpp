#include<bits/stdc++.h>
using namespace std;
struct abc 
{
	int a, b, c;
};
bool check(abc A, abc B) 
{
	if (A.c < B.c) 
	    return true;
	if (A.c == B.c && A.b < B.b)
	    return true;
	return false;
}
int main() 
{
	int t; 
	cin >> t;
	while (t--) 
	{
		int n, k; 
		cin >> n >> k;
		abc A[100000];
		for (int i = 0; i < n; i++) {
			cin >> A[i].a;
			A[i].b = i;
		    A[i].c = abs(k - A[i].a);
		}
		sort(A, A + n, check);
		for (int i = 0; i < n; i++)cout << A[i].a << " ";
		cout << endl;
	}
}
