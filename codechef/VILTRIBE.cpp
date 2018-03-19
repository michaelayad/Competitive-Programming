
 
#include<iostream>	
#include<algorithm>
#include<cstdio>
#include<sstream>
#include<cmath>
#include<climits>
#include<string>
#include<iomanip>
#include<vector>
using namespace std;
//********************************************************************************************
//******************************************************************************************** 
/*
jesus help me.......
*/
typedef long long lld;
typedef char c;
 
				
bool prime(int x)
{
	if (x == 1)
		return false;
	else if (x == 2)
		return true;
	for (int i = 2; i*i <= x; i++)
	{
		if (x%i == 0)
			return false;
 
	}
	return true;
}
void fun2(int t)
{
	if (t == 1)
	{
		cout << "*";
		return;
	}
	cout << "*";
	return fun2(t - 1);
}
 
void fun(int s)
{
	
	if (s)
	{
		cout << s % 10 << endl;
		fun(s / 10);
		
	}
}
long long numb(long long i){
	if ( i == 2 || i == 1)
		return 1;
	else{
		long long n = i, z = 0;
		while (n>1){
			if (i%n == 0){
				z++;
			}
			n--;
		}
		return z;
	}
 
}
 
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/
 
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		string s;
		cin >> s;
		int m = s.size(),a=0,b=0;
		for (int j = 0; j < m; j++)
		{
			if (s[j] == 'A')
			{
				a++;
				for (int h = j + 1; h < m; h++)
				{
					if (s[h] == 'A')
					{
						a += (h - j)-1;
						j = h-1;
						break;
 
					}
					else if (s[h] == 'B')
					{
						j = h-1;
						break;
 
 
					}
					
				}
 
			}
			else if (s[j] == 'B')
			{
				b++;
 
				for (int h = j + 1; h < m; h++)
				{
					if (s[h] == 'B')
					{
						b += (h - j) - 1;
						j = h-1;
						break;
 
					}
					else if (s[h] == 'A')
					{
						j = h-1;
						break;
 
 
					}
 
				}
 
			}
 
		}
		cout << a << " " << b << endl;
 
	}
	
	
 
 
	//system("pause");
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/ 