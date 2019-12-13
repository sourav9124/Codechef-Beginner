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
		int b;
		cin>>b;
		long long int ar[n];
		long long int price[n];
		int i=0;
		long long int max=0;
		while(n--)
		{
			int w,h,p;
			cin>>w>>h>>p;
			ar[i]=w*h;
			price[i]=p;
			if(max<ar[i] && price[i]<=b)
			{
				max=ar[i];
			}
			 
			
		}
		if(max!=0)
		{
			cout<<max<<endl;
		}
		else
		{
			cout<<"no tablet"<<endl;
		}
	}
}
