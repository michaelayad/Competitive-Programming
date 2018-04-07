#define _CRT_SECURE_NO_WARNINGS


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
	int t;
	cin>>t;
	for(int h=1;h<=t;h++)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    vector<int>v(n);
	    for(int i=0;i<3&&i<n;i++)
	        v[i]=i+1;
	   for(int i=3;i<n;i++)
	   {
	        v[i]=((v[i-1]+v[i-2]+v[i-3])%m)+1;
	   }
	   set<int>st,st2;
	   set<int>::iterator it;
	   map<int,int>mp;
	   for(int i=1;i<=k;i++)
	        st.insert(i);
	   int s = INT_MAX;
    	int j = 0;
    	for (int i = 0; i < n; i++)
    	{
    		while (j < n&&st2.size() < st.size())
    		{
    		    it=st.find(v[j]);
    		    if(it!=st.end()){
    			mp[v[j]]++;
    			st2.insert(v[j]);
    		    }
    			j++;
    		}
    		if (st2.size() == st.size())
    			s= min(s, j - i);
    		mp[v[i]]--;
    		if (mp[v[i]] <= 0)
    		{
    			st2.erase(v[i]);
    		}
    	 } 
    	 
    	 if(s==INT_MAX)
    	    cout<<"Case "<<h<<": "<<"sequence nai"<<endl;
    	  else
    	    cout<<"Case "<<h<<": "<<s<<endl;
    	    
	}
	
	//system("pause");
	return 0;
}