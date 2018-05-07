#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int co[1000000], arr[200005];
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
int main() {
 
    //st();
	//freopen("keys.in", "r", stdin);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		long long inv = 0;
		for (int i = 0;i < n;i++)
			cin >> arr[i];
		Merge_Sort(arr, 0, n, inv);
		if (inv & 1)cout << "NO" << endl;
		else cout << "YES" << endl;
	}

    return 0;
}
