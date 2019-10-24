#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		 char ch;
		 
		 cin>>ch;
		 
		 if(ch=='b'|| ch=='B')
		 {
		 	cout<<"BattleShip"<<endl;
//		 	continue;
		 }
		 else if(ch=='c'||ch=='C')
		 {
		 	cout<<"Cruiser"<<endl;
//		 	continue;
		 }
		 else if(ch=='D'|| ch=='d')
		 {
		   cout<<"Destroyer"<<endl;
//		   continue;
		 }
		 else if(ch=='f'|| ch=='F')
		 {
		 	cout<<"Frigate"<<endl;
//		 	break;
		 }
		 
	}
	return 0;
}
