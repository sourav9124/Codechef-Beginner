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
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
		int k;
    		cin>>k;
   		int value=ar[k-1];
	sort(ar,ar+n);
	
		
//	cout<<ar[1];
     
     for(int i=0;i<n;i++)
     {
     	if(value==ar[i])
     	
     	{
     		cout<<i+1<<endl;
		 }
	 }
		
	}

	
}
