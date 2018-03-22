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
using namespace std;

//jesus help me.......
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}



int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	 map < string, int >mp;
	 int n = 1;
	 string s = "";
	 for (int i = 0; i < 26; i++)
	 {
		 s += ('a' + i);
		 mp[s] = n;
		 n++;
		 s = "";

	 }
	 s = "";
	 for (int i = 0; i < 26; i++)
	 {
		 for (int j = i + 1; j < 26; j++)
		 {
			 s += ('a' + i);
			 s += ('a' + j);
			 mp[s] = n;
			 s = "";
			 n++;
		 }
	 }
	 s = "";
	 for (int i = 0; i < 26; i++)
	 {
		 for (int j = i + 1; j < 26; j++)
		 {
			 for (int h = j + 1; h < 26; h++){
				 s += ('a' + i);
				 s += ('a' + j);
				 s += ('a' + h);
				 mp[s] = n;
				 s = "";
				 n++;
			 }
		 }

	 }
	 s = "";

	 for (int i = 0; i < 26; i++)
	 {
		 for (int j = i + 1; j < 26; j++)
		 {
			 for (int h = j + 1; h < 26; h++){
				 for (int g = h + 1; g < 26; g++){
					 s += ('a' + i);
					 s += ('a' + j);
					 s += ('a' + h);
					 s += ('a' + g);
					 mp[s] = n;
					 s = "";
					 n++;
				 }
			 }
		 }
	 }
	 s = "";

	 for (int i = 0; i < 26; i++)
	 {
		 for (int j = i + 1; j < 26; j++)
		 {
			 for (int h = j + 1; h < 26; h++){
				 for (int g = h + 1; g < 26; g++){
					 for (int f = g + 1; f < 26; f++){
						 s += ('a' + i);
						 s += ('a' + j);
						 s += ('a' + h);
						 s += ('a' + g);
						 s += ('a' + f);
						 mp[s] = n;
						 s = "";
						 n++;
					 }
				 }
			 }
		 }
	 }

	string st;
	while (cin >> st)
	{
		cout << mp[st] << endl;
	}
	//system("pause");
	return 0;
}