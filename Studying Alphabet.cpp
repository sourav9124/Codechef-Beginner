#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int ar[26]={0};
	for(int i=0;i<s.length();i++)
	{
		char x=s[i];
		int p=int(x);
		p=p-97;
		ar[p]=1;
	}
	int n;
	cin>>n;
	while(n--)
	{
		int count=0;
		string k;
		cin>>k;
		for(int i=0;i<k.length();i++)
		{
			char z=k[i];
			int h=int(z);
			h=h-97;
			if(ar[h]==0)
			{
				count++;
				
			}
			else
			{
				count=count;
			}
			
		}
		if(count>0)
		{
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
		}
	}
}
