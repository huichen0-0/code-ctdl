#include<iostream>
using namespace std;
int a[15], n;
bool check() 
{
	int dem=0;
	for (int i = 1; i < n; i++)	
    {
		if(a[i-1]+a[i]==2)
		    return false;
		if(a[i-1]+a[i]==0) dem++; 
		if(dem==4) return false;
   }
	return true;
}
void sinh()  // sinh xau nhi phan khong co bit 1 lien tiep & bat dau bit 1, ket thuc bit 0
{
	for (int i = 0; i < n; i++) a[i] = 0;
	while (1) 
	{
		if (a[0] == 1 && a[n - 1] == 0 && check()) 
		{
			for (int i = 0; i < n; i++) 
			{
				if (a[i] == 1) cout << "8";
				else cout << "6";
			}
			cout <<endl;
		}
		int i = n - 1;
		while (i >= 0 && a[i] == 1)
		{ 
		    a[i] = 0; 
			i--; 
		}
		if (i < 0) return;
		if (i >= 0) a[i] = 1;
	}
}
int main() 
{
		cin >> n;
		sinh();
}
