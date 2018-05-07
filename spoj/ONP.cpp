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
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	int n;
	cin >> n;
	while (n--)
	{
		string s = "",s2;
		stack<char> st;
		cin >> s2;
		for (int i = 0;i < s2.size();i++)
		{
			if ((s2[i] >= 'a'&&s2[i] <= 'z') || (s2[i] >= 'A'&&s2[i] <= 'Z'))s += s2[i];
			else if (s2[i] == '-' || s2[i] == '+' || s2[i] == '*' || s2[i] == '/' || s2[i] == '^')st.push(s2[i]);
			else if (s2[i] == ')')s += st.top(), st.pop();
			
		}
		cout << s << endl;
	}
//	system("pause");
	return 0;
}