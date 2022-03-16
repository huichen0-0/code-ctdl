#include<iostream>
using namespace std;

void sinh(string&s, int n) //xau nhi phan ke tiep (+1)
{
	int a = 0;
	for (int i = n - 1; i >= 0; i--)
	 {
		if (s[i] == '0') 
		{
			s[i] = '1';
			for (int j = i + 1; j < n; j++) 
			{
				s[j] = '0';
			}
			a = 1;
			break;
		}
	}
	if (a == 0)
		for (int i = 0; i < n; i++)cout << 0;
	else cout << s;
	cout << endl;
}

int main() 
{
	int t; 
	cin >> t;
	while (t--)
	 {
		string s; 
		cin >> s;
		sinh(s, s.length());
	}
}
