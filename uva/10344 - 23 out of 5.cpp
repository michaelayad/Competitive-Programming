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
#include<set>
#include<fstream>
using namespace std;
//********************************************************************************************
//******************************************************************************************** 
/*
jesus help me.......
*/
typedef long long lld;
typedef char c;



/*
jesus help me.......
jesus help me.......
jesus help me.......
*/



int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r)
	{
		int m = l + (r - l) / 2;

		if (arr[m] == x)
			return m;

		if (arr[m] < x)
			l = m + 1;

		else
			r = m - 1;
	}

	return -1;

}





bool sortbysec(const pair<string, int> &a, const pair<string, int> &b)
{
	
	return (a.second > b.second);
}

const int n=5;
vector<int>v(n);

bool bos(int total, int pos)
{
	if (pos == 5 &&total==23)
		return true;
	if (pos == 5 && total != 23)
		return false;

	int num = v[pos];
	return bos(total + num, pos+1) || bos(total*num, pos+1) || bos(total - num, pos+1);
}
int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);


	//freopen("keys.in", "r", stdin);
	
	while (1)
	{
		bool b = false;
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
			if (v[i] != 0)
				b = true;
		}
		if (!b)
			break;
		sort(v.begin(), v.end());
		bool bo = false;
		do
		{
			if (bos(v[0], 1))
			{
				bo = true;
				break;
			}
		} while (next_permutation(v.begin(), v.end()));
		if (bo)
			cout << "Possible" << endl;
		else
			cout << "Impossible" << endl;
	}

	system("pause");


	return 0;
}
/*
jesus help me.......
jesus help me.......
jesus help me.......
*/