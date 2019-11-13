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
		
		int ar[35];
		int size=sizeof(ar)/sizeof(ar[0]);
		
		for(int i=0;i<size;i++)
		{
			ar[i]=i*i;
		}
		int limit=ceil(sqrt(n));
		
		int count=0;
		vector<int> v;
		while(n!=0)
		{
			  for(int i=0;i<35;i++)
		       {
					if(ar[i]<=n && ar[i+1]>n)
					 {
			        	n=n-ar[i];
			        	
			        	
				         
				         count++;
		            }
	         	}
		}
		
		
	     cout<<count<<endl;
		
		
	}
}
