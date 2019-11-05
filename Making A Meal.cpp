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
		
		int bowl[26]={0};
		
		vector<int> v;
		
		
		for(int i=0;i<n;i++)
		{
		  	string s; cin>>s;
		  
		  for(int j=0;j<s.size();j++)
		  {
		  	   int p=s[j]-97;
		  	   
		  	   bowl[p]++;
		  }
			
		}
		
		v.push_back(bowl[2]/2);
		v.push_back(bowl[3]/1);
		v.push_back(bowl[4]/2);
		v.push_back(bowl[5]/1);
		v.push_back(bowl[7]/1);
		v.push_back(bowl[14]/1);
		
		sort(v.begin(),v.end());
		
		cout<<v[0]<<endl;
		
		
		
		
	
		 
		  
		  
	
	}
}
