#include<iostream>	
#include<algorithm>
#include<cstdio>
#include<sstream>
#include<cmath>
#include<climits>
#include<string>
#include<iomanip>
#include<vector>
#include<map>
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
	map<int, int>asd;
	map<int, int>::iterator ir;
	ir = asd.begin();
	ir->first;
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
		int n;
		cin >> n;
		vector<int>v(n);
		for (int j = 0; j < n; j++)
		{
			cin >> v[j];
 
		}
		sort(v.begin(), v.end());
		int x = v[n - 1] + v[n - 2];
		int m = 0, b = 0;
		for (int j = 0; j <= n - 1; j++)
		{
			for (int h = j+1; h <= n - 1; h++)
			{
				int y = v[j] + v[h];
				m++;
				if (y == x)
					b++;
			}
		}
		double z = double(b) / double(m);
		cout << setprecision(8) << fixed << z << endl;
 
	}
 
	////system("pause");
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/ 