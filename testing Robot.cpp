#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int x;
		cin>>x;
		
		
		char ch[n];
		vector<int> v;
		v.push_back(x);
		
		for(int i=0;i<n;i++)
		{
			cin>>ch[i];
		}
		
		for(int i=0;i<n;i++)
		{
			if(ch[i]=='R')
			{
			   x=x+1;
			   v.push_back(x);	
			}
			else
			{
				x=x-1;
				v.push_back(x);
			}
		}
		set<int> s;
		for(int i=0;i<v.size();i++)
		{
			s.insert(v[i]);
			
		    
		}
		cout<<s.size()<<endl;
		
		
	}
}
