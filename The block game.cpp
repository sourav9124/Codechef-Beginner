#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	long long n,no;
   	cin>>n;
   	no=n;
   	
   	long long int rev=0;
   	while(n!=0)
   	{
   		int d=n%10;
   		rev=(rev*10)+d;
   		n=n/10;
   		
    }
    if(no==rev)
    {
    	cout<<"wins"<<endl;
	}
	else
	{
		cout<<"losses"<<endl;
	}
   }
}
