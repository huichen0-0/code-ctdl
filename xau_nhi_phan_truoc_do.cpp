#include<iostream>
#include<string>
using namespace std;
void con(string&s) //xau nhi phan truoc do (-1)
{
	int xx=0;
	for (int i = s.length() - 1; i >= 0; i--) 
	{
		if (s[i] == '1') 
		{
			s[i] = '0';
			xx = 1;
			for (int j = i + 1; j < s.length(); j++) 
			{
				s[j] = '1';
			}
			break;
		}
	}
	if (xx == 0) 
	{
		for (int i = 0; i < s.length(); i++) cout << 1;
	}
		else cout << s;
}		
int main() 
{
	int t; 
	cin >> t;
	while (t--) 
	{
		string s; 
		cin >> s;	
		con(s);
		cout << endl;
	}
}
