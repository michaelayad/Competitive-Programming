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
		vector<int>rate(n);
		vector<int>min(n);
		vector<int>max(n);
		vector<int>time(n);
		vector<int>out(n);
 
		string rt[101], color[101];
		for (int j = 0; j < n; j++)
		{
			cin >> rate[j] >> min[j] >> max[j] >> time[j] >> rt[j] >> color[j];
			
			
		}
		for (int h = 0; h < n; h++)
		{
			bool b = false;
			for (int g = 0; g <h ; g++)
			{
 
				if (rt[h] == rt[g] && ((color[h] == "random"&&color[g] == "random") || (color[h] == "white"&&color[g] == "black") || (color[h] == "black"&&color[g] == "white")) && (time[h] == time[g]) && ((rate[h] >= min[g] && rate[h] <= max[g]) && (rate[g] >= min[h] && rate[g] <= max[h])))
				{
					out[h] = g + 1;
					max[g] = 0;
					max[h] = 0;
					b = true;
					break;
				}
				
			}
			if (b == false)
				out[h] = 0;
		}
		for (int j = 0; j < n; j++)
		{
			if (out[j] == 0)
				cout << "wait" << endl;
			else
				cout << out[j] << endl;
		}
 
 
 
	}
 
	//system("pause");
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/ 