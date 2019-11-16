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
     	long long int ar[n];
     	for(int i=0;i<n;i++)
     	{
     		cin>>ar[i];
		}
		sort(ar,ar+n);
		long long int countN,countP;
	     countN=countP=0;
		if(ar[0]<0)
		{
			
		
		for(int i=0;i<n;i++)
		{
			if(ar[i]<0)
			{
		       countN++;
			}
			else
			{
				countP++;
			}
		}
		if(countN>countP)
		{
			cout<<countN<<" "<<countP<<endl;
		}
		else
		{
			cout<<countP<<" "<<countN<<endl;
		}
		
   	}
   	else
   	{
   	   cout<<n<<" "<<n<<endl;	
    }
  }
}
