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
 
	string s;
	while (getline(cin, s)&&s!="DONE")
	{
 
		if (s.size() == 0)
		{
			cout << "You won" << "\'" << "t be eaten!" << endl;
			continue;
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i]<'A' || (s[i] > 'Z'&&s[i]<'a') || s[i]>'z')
				s[i] = ' ';
			if (s[i] >= 'A'&&s[i] <= 'Z')
				s[i] += 32;
		}
		istringstream ss(s);
		string s2,s3;
		while (ss >> s2)
		{
			s3 += s2;
		}
		bool b = true;
		for (int i = 0, j = s3.size() - 1; i < s3.size(), j >= 0; i++, j--)
		{
			if (s3[i] != s3[j])
			{
				b = false;
				break;
			}
		}
		if (b)
			cout << "You won"<<"\'"<<"t be eaten!" << endl;
		else
			cout << "Uh oh.." << endl;
 
	}
 
 
//	system("pause");
 
	return 0;
}