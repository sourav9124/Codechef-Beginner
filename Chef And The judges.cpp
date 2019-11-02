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
		int br[n];
		
		
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>br[i];
		}
		sort(ar,ar+n);
		sort(br,br+n);
		int a=accumulate(ar,ar+(n-1),0);
		int b=accumulate(br,br+(n-1),0);
		
		if(a==b)
		{
			cout<<"Draw"<<endl;
		}
		else if(a<b)
		{
			cout<<"Alice"<<endl;
		}
		else if(b<a)
		{
			cout<<"Bob"<<endl;
		}
		
		
		
	}
}
