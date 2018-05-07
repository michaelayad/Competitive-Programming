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


int co[1000000];
void Merge_Sort(int arr[], int l, int r,long long &inv)
{
	if (r - l <= 1)
		return;
	int md = (l + r) / 2;
	Merge_Sort(arr, l, md,inv);
	Merge_Sort(arr, md, r,inv);
	int x = l, y = md, ind = 0;
	while (x < md&&y < r)
	{
		if (arr[x] <= arr[y])
			co[ind++] = arr[x], x++;
		else
		{
			co[ind++] = arr[y], y++;
			inv += (md - x);
		}
	}
	while (x < md)
	{
		co[ind++] = arr[x]; x++;

	}
	while (y < r)
	{
		co[ind++] = arr[y]; y++;

	}
	ind = 0;
	for (int i = l;i < r;i++)
	{
		arr[i] = co[ind++];
	}

}
///////////////////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int t,arr[200005];
	cin >> t;

	while (t--)
	{
		int n;
		long long inv = 0;
		cin >> n;
		for (int i = 0;i < n;i++)
		{
			cin >> arr[i];
		}
		Merge_Sort(arr, 0, n, inv);
		cout << inv << endl;
	}
//	system("pause");
	return 0;
}