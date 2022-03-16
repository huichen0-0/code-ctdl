#include<iostream>
using namespace std;
int n,a[100];
bool has_next;
void sinh()  
{
	int xx= 0;
	for (int i = n; i >=1; i--) 
	{
		if (a[i]==6) 
		{
			xx = 1;
			a[i]=8;
			for (int j = i + 1; j <= n; j++)  a[j] = 6;
			break;
		}
	}
	if (xx == 0) has_next= true;
}
bool check() 
{
	if (a[1] == 6 || a[n] == 8) return false;
	for (int i = 1; i < n; i++)
	    if (a[i] == 8 && a[i + 1] == 8)
		    return false;
	int dem = 1;
	for (int i = 1; i < n; i++)
	 {
		if (a[i] == 6 && a[i + 1] == 6) 
		{
			dem++;
		}
		else dem = 1;
		if (dem == 4) return false;
	}
	return true;
}
int main()
{
    cin >> n;
	for (int i = 1; i < 100; i++)
	a[i] = 6;
	while (!has_next) 
	{
		if (check()) 
		{
			for (int i = 1; i <= n; i++)
			     cout << a[i];
			cout << endl;
		}
		sinh();
	}
}

