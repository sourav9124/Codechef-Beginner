#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		int first,last,sum;
		sum=0;
		cin>>n;
		
		
	 int digits = (int)log10(n); 


      first = (int)(n / pow(10, digits));
	  last=n%10; 
		sum=first+last;
		cout<<sum<<endl;
		
	}
}
