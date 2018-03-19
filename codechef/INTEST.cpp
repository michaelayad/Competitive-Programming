#include<iostream>
using namespace std;
int main()
{
	int n, k,x,a=0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x%k == 0)
			a++;
	}
	cout << a << endl;
	//system("pause");
	return 0;
} 