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
 
 
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/
 
 
 
 
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
 
 
	//freopen("keys.in", "r", stdin);
 
 
	int n;
	while (cin >> n){
		int b = 0, tot = 0;
		while (n >= 3)
		{
			tot += (n / 3) * 3;
			n = (n / 3) + (n % 3);
		}
		tot += n;
		if (n == 2)
			tot++;
		cout << tot << endl;
 
	}
 
//	system("pause");
	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/