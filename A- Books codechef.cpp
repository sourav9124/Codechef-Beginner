#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int ar[n];
		long long int br[n];
		
		
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		int count;
		for(int i=0;i<n;i++)
		{
			count=0;
		    for(int j=i+1;j<n;j++)
		    {
		    	if(ar[i]<ar[j])
		    	{
		    		count++;
				}
			}
			br[i]=count;
		}
		for(int i=0;i<n;i++)
		{
			cout<<br[i];
		}
		cout<<endl;
	}
}
