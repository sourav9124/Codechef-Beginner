#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int count_u=0;
		int count_l=0;
		int diff_u=0;
		int diff_l=0;
		for(int i=0;i<s.length();i++)
		{
			if(isupper(s[i]))
			{
				count_u++;
			}
			else if(islower(s[i]))
			{
				count_l++;
			}
			
		}
		diff_u=k-count_u;
		diff_l=k-count_l;
		if(diff_u>k)
		{
			cout<<"chef"<<endl;
		
		}
		else if(diff_l>k)
		{
			cout<<"brother"<<endl;
		}
		else if(diff_u==diff_l)
		{
			cout<<"none"<<endl;
		}
		else if(diff_u==0 && diff_l==0)
		{
			cout<<"Both"<<endl;
		}
		
        
	}
}
