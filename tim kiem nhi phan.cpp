#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, h, k, x=-1;
		cin >> n >> k;
		for(int i=0; i<n; i++) {
			cin >> h;
			if(h==k) {
				x=i+1;
			}
		}
		if(x>0) {
			cout << x << endl;
		} else {
			cout << "NO" << endl;
		}

	}
}

