#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int ar[3]={0};
		int b_count=0;
		
		for(int i=0;i<3;i++)
		{
			if(s1[i]=='b' || s2[i]=='b')
			{
				ar[i]=1;
			}
		}
		for(int i=0;i<3;i++)
		{
			if(ar[i]==1)
			{
				b_count++;
			}
		}
		if(b_count<=1)
		{
			cout<<"no"<<endl;
		}
		else if(b_count==2)
		{
			int index=0;
			for(int i=0;i<3;i++)
			{
				if(ar[i]==0)
				{
					index=i;
				}
			}
			
				if(s1[index]=='o'||s2[index]=='o')
				{
					cout<<"yes"<<endl;
				}
				else
				{
					cout<<"no"<<endl;
				}
				
			
		}
		else if(b_count==3)
		{
			int o_count=0;
			
			for(int i=0;i<3;i++)
			{
			    if(s1[i]=='o' || s2[i]=='o')
			    {
			    	o_count++;
				}
			  
			}
			
			if(o_count==0)
			{
				cout<<"no"<<endl;
			}
			else
			{
				cout<<"yes"<<endl;
			}
			  
		}
	}
}
