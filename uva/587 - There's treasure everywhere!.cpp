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
const double EPS = 1e-8;
//jesus help me.......
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
}
///////////////////////////////////////////////////////////////		
///////////////////////////////////////////////////////////
bool sortby(const pair<int, int>&a, const pair<int, int>&b)
{
	if (a.first >= b.first&&a.second >= b.second)
		return true;
	return false;
}
//////////////////////////////////////////////////
struct point
{
	double x, y;
};
int dx[] = { 1, 0, -1, 0, -1, -1, 1, 1 };
int dy[] = { 0, 1, 0, -1, -1, 1, -1, 1 };
double dist(point p1, point p2) 
{ 
	// Euclidean distance
	// hypot(dx, dy) returns sqrt(dx * dx + dy * dy)
	return hypot(p1.x - p2.x, p1.y - p2.y);
}

/////////////////////////////////////////////
int main()
{
	fast();
	//freopen("keys.in", "r", stdin);
	//don't open standing
	//don't open standing
	//don't open standing
	//don't open standing
	//don't open standing
	//don't open standing
	//	freopen("doroob.in", "r", stdin);
	string s;
	int m = 1;
	while (cin >> s&&s!="END")
	{
		string s1 = "", s2="";
		int i = 0;
		point p1, p2;
		p1.x = 0.0;
		p1.y = 0.0;
		p2 = p1;
		vector<double>v1; vector<string>v2;
		while (i < s.size())
		{
			if (s[i] == ','||s[i]=='.')
			{
				double nm = 0.0,h=0;
				for (int j = s1.size() - 1; j >= 0; j--)
				{
					nm += (pow(10, h++)*(s1[j] - '0'));
				}
				v1.push_back(nm);
				v2.push_back(s2);
				s1 = "", s2 = "";
				i++;
				continue;
			}
			if (s[i] >= 'A'&&s[i] <= 'Z')
			{
				s2 += s[i];
			}
			else
			{
				s1 += s[i];
			}
			i++;
		}
		for (int i = 0; i < v1.size(); i++)
		{
			if (v2[i] == "N")
			{
				p2.y += v1[i];
			}
			if (v2[i] == "NE")
			{
				double z = v1[i] / sqrt(2);
				p2.x += z;
				p2.y += z;
			}
			if (v2[i] == "E")
			{
				p2.x += v1[i];
			}
			if (v2[i] == "SE")
			{
				double z = v1[i] / sqrt(2);
				p2.x += z;
				p2.y -= z;
			}
			if (v2[i] == "S")
			{
				p2.y -= v1[i];
			}
			if (v2[i] == "SW")
			{
				double z = v1[i] / sqrt(2);
				p2.x -= z;
				p2.y -= z;
			}
			if (v2[i] == "W")
			{
				p2.x -= v1[i];
			}

			if (v2[i] == "NW")
			{
				double z = v1[i] / sqrt(2);
				p2.x -= z;
				p2.y += z;
			}
		}
		double d = dist(p1, p2);
		cout << "Map #" << m++ << endl;
		cout << "The treasure is located at (";
		cout << setprecision(3) << fixed << p2.x << "," << p2.y <<")."<< endl;
		cout << "The distance to the treasure is " << setprecision(3) << fixed << d << "." << endl;
		cout << endl;
	}
	system("pause");
	return 0;
	//don't open standing

}