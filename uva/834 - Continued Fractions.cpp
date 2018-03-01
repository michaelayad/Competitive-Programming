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
#include<fstream>
using namespace std;
//********************************************************************************************
//******************************************************************************************** 
/*
jesus help me.......
*/ 
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
 
 
	//freopen("keys.in", "r", stdin);
 
	int x, y;
	while (cin >> x >> y)
	{
 
		cout << "[";
		cout << x / y;
		int m = 0;
		while (x%y!=0)
		{
			int a = x%y;
			x = y;
			y = a;
			if (m == 0)
				cout << ";";
			else
				cout << ",";
			cout << x / y;
			m++;
 
		}
		cout << "]" << endl;
 
 
 
	}
	//system("pause");
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/