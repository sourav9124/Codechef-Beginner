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
	   int ar[n+1];
	   int br[n+1];
	   int f_count=0;
	   int b_count=0;
	  
	   
	   for(int i=1;i<n+1;i++)
	   {
	   	cin>>ar[i];
	   }
	   for(int i=1;i<n+1;i++)
	   {
	   	cin>>br[i];
	   }
	  
	

         for(int i=1;i<n+1;i++)
         {
         	if(ar[i]<=br[i])
         	{
         		f_count++;
			 }
		 }
		 
		  for(int i=1;i<n+1;i++)
	      {
	   	    if(ar[i]==br[n+1-i])
	   	     {
	   	   	   b_count++;
	         }
	      
	      }
	      
	      
	     // cout<<f_count<<endl;
	      //cout<<b_count<<endl;
		 
	
	
		 if(f_count==n && b_count==n)
		 {
		 	cout<<"both"<<endl;
		 }
		 else if(f_count!=n && b_count!=n)
		 {
		 	cout<<"none"<<endl;
		 }
		 else if(f_count==n && b_count!=n)
		 {
		 	cout<<"front"<<endl;
		 }
		 else if(f_count!=n && b_count==n)
		 {
		 	cout<<"back"<<endl;
		 }
	}
}      







