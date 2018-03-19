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
bool s(int x)
{
	int a, b, c, d;
	a = x % 10;
	b = x % 100 / 10;
	c = x % 1000 / 100;
	d = x / 1000;
	if (a != b&&a != c&&a != d&&b != c&&b != d&&c != d)
		return true;
	else
		return false;
}
bool st(string s, int k)
{
	int n=0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '4' || s[i] == '7')
			n++;
	}
	if (n <= k)
		return true;
	return false;
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
		long long v = 1;
		int n, k;
		cin >> n >> k;
		vector<int>v1(k);
		for (int j = 0; j < n; j++)
		{
			int a;
			cin >> a;
			v *= a;
			if (v >= INT_MAX)
			{
				v = INT_MAX;
			}
		}
		for (int h= 0; h < k; h++)
		{
			int z;
			cin >> z;
			v1[h] = z / v;
 
 
		}
		for (int j = 0; j < k; j++)
		{
			cout << v1[j]<<" ";
		}
		cout << endl;
 
	}
	
	////system("pause");
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/ 