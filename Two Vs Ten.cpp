#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int x;
		cin>>x;
		
		long long 	int d=x%10;
			if(d!=0  && d!=5)
			{
				cout<<-1<<endl;
				
			}
			else if(d==0)
			{
				cout<<0<<endl;
			    
			}
			else if(d==5)
			{
				x=x*2;
				if(x%10==0)
				{
					cout<<1<<endl;
				}
				
				
			}
			
		
	}
}
