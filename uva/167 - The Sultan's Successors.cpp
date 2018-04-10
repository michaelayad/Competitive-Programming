#define _CRT_SECURE_NO_WARNINGS
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
int v[8][8];
bool col[8],diag1[17],diag2[17];
int score = 0;
void backtrack(int m,int sum)
{
	if (m == 8)
	{
		score = max(score, sum);
		return;
	}
	for (int i = 0;i < 8;i++)
	{
		if (!col[i] && !diag1[m - i + 7] && !diag2[m + i])
		{
			col[i] = true;
			diag1[m - i + 7] = true;
			diag2[m + i] = true;
			backtrack(m + 1, sum + v[m][i]);
			col[i] = false;
			diag1[m - i + 7] = false;
			diag2[m + i] = false;
		}
		
	}


}



int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int k;
	cin >> k;
	while (k--)
	{
		memset(col, false, sizeof(col));
		memset(diag1, false, sizeof(diag1));
		memset(diag2, false, sizeof(diag2));
		score = 0;
		for (int i = 0;i < 8;i++)
		{
			for (int j = 0;j < 8;j++)
			{
				cin >> v[i][j];
			}
		}
		backtrack(0, 0);
		cout <<setw(5)<<setiosflags(ios::right) <<score << endl;
	}


	system("pause");
	return 0;
}