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
#include<bitset>
using namespace std;


int main()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);


	//freopen("keys.in", "r", stdin);
	int n;
	cin >> n;
	vector<int>v(n,0);
	int x;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> x;
			v[i] = max(v[i], x);
			v[j] = max(v[j], x);

		}
	}
	bool b = true;
	for (int i = 0; i < n; i++)
	{
		if (b&&v[i] == n - 1)
		{
			v[i] = n;
			b = false;
		}
		cout << v[i] << " ";
	}


	//system("pause");

	return 0;
}