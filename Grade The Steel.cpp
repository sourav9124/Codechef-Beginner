//Hardness must be greater than 50.
//Carbon content must be less than 0.7.
//Tensile strength must be greater than 5600.
//
//
//The grades are as follows:
//Grade is 10 if all three conditions are met.
//Grade is 9 if conditions (i) and (ii) are met.
//Grade is 8 if conditions (ii) and (iii) are met.
//Grade is 7 if conditions (i) and (iii) are met.
//Garde is 6 if only one condition is met.
//Grade is 5 if none of three conditions are met.
#include<bits/stdc++.h>
using namespace  std;
int main()
{
	 int grade=0;
	
	
	int h,t,n;
	float c;
	cin>>n;
	while(n--)
	{
	    cin>>h>>c>>t;
	if(h>50 && c<0.7 && t>5600)
	{
	   grade=10;
	   cout<<grade<<endl;	
	}
	else if(h>50 && c<0.7)
	{
		grade=9;
		cout<<grade<<endl;
	}
	else if(c<0.7 && t>5600)
	{
		grade=8;
		cout<<grade<<endl;
	}
	else if(h>50 && t>5600)
	{
		grade=7;
		cout<<grade<<endl;
		
	}
	else if(h>50 || c<0.7 || t>5600)
	{
		grade=6;
		cout<<grade<<endl;
	}
	else
	{
		grade=5;
		cout<<grade<<endl;
	}	
	}
	
	
}
