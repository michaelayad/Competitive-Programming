#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	short x;
	float y;
	cin >> x;
	cin >> setprecision(2) >> fixed >> y;
	if (x >= y || x % 5 != 0)
	{
		cout << setprecision(2) << fixed << y;
	}
	else if (x < y&&y-x>=0.50&&x % 5 == 0)
	{
		cout << setprecision(2) << fixed << y-(x+0.50);
 
	}
	else if (x < y&&y - x < 0.50&&x % 5 == 0)
	{
		cout << setprecision(2) << fixed << y ;
 
	}
 
 
 
	return 0;
} 