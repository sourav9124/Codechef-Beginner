#include<bits/stdc++.h>
using namespace std;
typedef pair<char, int> pairs; 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
	  string str;
	  cin>>str;
	  
	  
	  map<char,int> mp;
	  set<int> s;
	  for(int i=0;i<str.length();i++)
	  {
	  	mp[str[i]]++;
	  }
	  vector<int> v;
	  
	  map<char,int>::iterator it;
	  for(it=mp.begin();it!=mp.end();it++)
	  {
	  	 v.push_back(it->second);
	  }
	  
	  if(v.size()==2)
	  {
	  	cout<<"YES"<<endl;
	  }
	  else
	  {
	  	cout<<"NO"<<endl;
	  }
//	  set<int>::iterator it2;
//	  for(int i=0;i<v.size();i++)
//	  {
//	  	s.insert(v[i]);
//	  }
//	  cout<<s.size()<<endl;
//	  if(s.size()==2)
//	  {
//	  	cout<<"YES"<<endl;
//	  }
//	  else
//	  {
//	  	cout<<"NO"<<endl;
//	  }
	  
		
	}
}
