#include<iostream>
using namespace std;
int main()
{
	int w;
	cin >> w;
	float a;
	cin >> a;
	(w%5==0 && a>w+0.5) ? cout<<a-w-0.5: cout<<a;
	return 0;
}
