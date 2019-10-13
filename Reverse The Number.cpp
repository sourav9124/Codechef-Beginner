#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,rev;
		rev=0;
		cin>>n;
		while(n!=0)
		{
			int d=n%10;
			rev=(rev*10)+d;
			n=n/10;
		}
		cout<<rev<<endl;
		
	}
}
