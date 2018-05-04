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

///////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////
bool vis[105], arr[26][26];
int n, m;
void dfs(int node,int &cnt)
{
	vis[node] = 1;
	cnt++;
	for (int i = 0;i < 26;i++)
	{
		if (arr[node][i] && (!vis[i]))
			dfs(i,cnt);
	}
}

///////////////////////////////////////////////////////////
int main()
{
	//fast();
	//freopen("keys.in", "r", stdin);
	int t;
	cin >> t;
	while (t--)
	{
		memset(vis, 0, sizeof(vis));
		memset(arr, 0, sizeof(arr));
		string s;
		while (cin >> s&&s[0] != '*')
		{
			arr[s[1] - 'A'][s[3] - 'A'] = 1;
			arr[s[3] - 'A'][s[1] - 'A'] = 1;
		}
		cin >> s;
		int tree = 0, cor = 0;
		for (int i = 0;i < s.size();i+=2)
		{
			int cnt = 0;
			if (!vis[s[i] - 'A'])
			{
				dfs(s[i] - 'A',cnt);
				if (cnt == 1)
					cor++;
				else
					tree++;
			}
		}
		cout << "There are " << tree << " tree(s) and " << cor << " acorn(s)." << endl;
	}
	system("pause");
	return 0;
}