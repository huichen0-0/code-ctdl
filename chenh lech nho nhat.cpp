#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long a[n], mi=100000000, tmp;
		for(auto &x:a)		cin >> x;
		sort(a,a+n);
		for(int i=1; i<n; i++){
			tmp = a[i] - a[i-1];
			mi=min(mi, tmp);
		}
		
		cout << mi << endl;
	}
}
/*
3

6
1 5 3 19 18 25

4
30 5 20 9

7
1 19 2 31 38 25 100
*/
