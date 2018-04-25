//#define _CRT_SECURE_NO_WARNINGS
//             »”„ «·À«·ÊÀ «·«ﬁœ”

#include<iostream>	
#include<algorithm>
#include<cstdio>
#include<sstream>
#include<cmath>
#include<climits>
#include<string>
#include<iomanip>
#include<vector>
#include<stack>
#include<map>
#include<queue>
#include<deque>
#include<set>
#include<fstream>
#include<bitset>
#include <cstring>
using namespace std;

//jesus help me.......
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
///////////////////////////////////////////////////////////////		

///////////////////////////////////////////////////////////
int arrlist[11];
int LIS(int i,int n,int prev)
{
	if (i == n)
		return 0;
	int choice1 = LIS(i + 1, n, prev);
	int choice2 = 0;
	if (arrlist[i] > prev)
		choice2 = LIS(i + 1, n, arrlist[i]) + 1;
	return max(choice1, choice2);
}
///////////////////////////////////////////////////////////
int main()
{
	//fast();
	//freopen("keys.in", "r", stdin);
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> arrlist[i];
	cout << LIS(0, n, 0) << endl;
	system("pause");
	return 0;
}