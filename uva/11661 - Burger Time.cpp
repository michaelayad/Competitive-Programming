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
	while (cin >> n&&n)
	{
		string s;
		cin >> s;
		int sum = INT_MAX;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == 'Z')
			{
				sum = 0;
				break;
			}
			else if (s[i] != 'Z'&&s[i]!='.')
			{
				for (int j = i + 1; j < n; j++)
				{
					if (s[j] == 'Z')
					{
						sum = 0;
						i = j-1;
						break;
					}
					if (s[j] != s[i]&&s[j]!='.')
					{
						if (j - i < sum)
						{
							sum = j - i;
 
						}
						i = j;
					}
					if (s[j] == s[i])
					{
						i = j;
					}
 
				}
			}
 
		}
		cout << sum << endl;
	}
 
//	system("pause");
 
	return 0;
}