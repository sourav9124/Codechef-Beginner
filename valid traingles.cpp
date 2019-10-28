#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	  long long int a,b,c;
	  cin>>a>>b>>c;
	  int sum=0;
	  sum=a+b+c;
	  if(sum==180)
	  {
	  	cout<<"YES"<<endl;
	  }
	  else if(sum!=180)
	  {
	  	cout<<"NO"<<endl;
	  }
	}
}
