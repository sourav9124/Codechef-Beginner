#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
       long long int n;
       long long int sum=0;
       cin>>n;
       
       if(n==1)
       {
       	cout<<n;
	   }
	   else
	   {	   
       
       int d;
       while(n!=0)
       {
          d=n%10;
          sum+=d;
          n=n/10;
	   }
	   cout<<sum<<endl;
       }     
	}
}
