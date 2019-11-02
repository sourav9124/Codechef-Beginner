#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n; cin>>n;
		string s;
		cin>>s;
		
		if(n%2==0)
		{
			for(int i=0;i<n;i+=2)
			{
				char temp=s[i+1];
				s[i+1]=s[i];
				s[i]=temp;
			}
		}
		else
		{
			for(int i=0;i<n-1;i+=2)
			{
				char temp=s[i+1];
				s[i+1]=s[i];
				s[i]=temp;
			}
			
		}
		
		for(int i=0;i<n;i++)
		{
			char z=s[i];
		
			
      		int index=z-97;
      	
         	int ans =25-index;
         	
         	ans=ans+97;
             char res=(char)ans;
			
		      cout<<res;
			
			
		}
		cout<<endl;
		
		
	}
}
