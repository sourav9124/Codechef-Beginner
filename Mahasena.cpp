#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	int countL=0;
	int countU=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<n;i++)
	{
		if(ar[i]%2==0)
		{
			countL++;
		}
		else
		{
		     countU++;
		}
	}
	if(countL>countU)
	{
		cout<<"READY FOR BATTLE"<<endl;
	}
	else
	{
		cout<<"NOT READY"<<endl;
	}
	
	
	
	
}
