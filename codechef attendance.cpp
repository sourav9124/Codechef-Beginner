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
		int ar[n];
		string f[n];
		string l[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>f[i]>>l[i];
			
		}
		for(int i=0;i<n;i++)
		{
			ar[i]=0;
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(f[i]==f[j])
				{
					ar[i]++;
					ar[j]++;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			if(ar[i]>0)
			{
				cout<<f[i]<<" "<<l[i]<<endl;
			}
			else
			{
				cout<<f[i]<<endl;
			}
		}
		
		
	}
}
