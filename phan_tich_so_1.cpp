#include<iostream>
#include<vector>
using namespace std;
int n;
vector<int> a(11);
void test(int u, int v, int sum) 
{
	for (int i = v; i >= 1; i--) {
		if (sum + i <= n) {
			a[u] = i;
			if (sum + i == n) {
				cout << "(";
				for (int j = 1; j < u; j++)cout << a[j] << " ";
				cout << a[u] << ") ";
			}
			else test(u + 1, i, sum + i);
		}
	}
}
int main() 
{
	int t; 
	cin >> t;
	while (t--) 
	{
		cin >> n;
		test(1, n, 0);
		cout << endl;
	}
}
