#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		
		
	

		
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		
		}
		int max=0;
		for(int i=0;i<=n-k;i++)
		{
			
			int sum=0;
			for(int j=i;j<i+k;j++)
			{
				sum+=ar[j];
				
			}
			
			if(max<sum)
			{
				max=sum;
			}
		}
		cout<<max<<endl;
		
	
			 
		   
	}
}
