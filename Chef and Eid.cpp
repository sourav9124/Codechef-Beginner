#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		vector<long long int> v;
		cin>>n;
		long long ar[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		sort(ar,ar+n);
		for(int i=0;i<n-1;i++)
		{
			int diff=abs(ar[i]-ar[i+1]);
			
			v.push_back(diff);
			 
		}
		sort(v.begin(),v.end());
		
		int ans=*min_element(v.begin(),v.end());
		
		cout<<ans<<endl;
		
	}
}
