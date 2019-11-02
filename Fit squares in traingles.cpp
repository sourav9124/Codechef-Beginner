#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		 int aos=2*2;
		 long long ans=0;
         int  base;
         long long int total_area=0;
         cin>>base;
         if (base==1 || base==2 || base==3)
         {
         	cout<<"0"<<endl;
		 }
         
         else if(base%2==0)
         {
         	total_area=(0.5*base*base);
         	
         	ans=(total_area-base)/aos;
         	
         	cout<<ans<<endl;
         	
		 }
		 else
		 {
		 	base=base-1;
		 	  
		 	  
		 	  total_area=(0.5*base*base);
         	
            	ans=(total_area-base)/aos;
         	
            	cout<<ans<<endl; 
		 }
	}
   
}
