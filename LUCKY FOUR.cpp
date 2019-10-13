#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   int count=0;
   while(t--)
   {
   	long long int n;
   	cin>>n;
   	count=0;
   	
   	while(n!=0)
   	{
   	   int d=n%10;
   	   if(d==4)
   	   {
   	   	count++;
		  }
		  n=n/10;
	}
	cout<<count<<endl;
   }
}
