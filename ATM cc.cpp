#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
	float mon,bal;
	cin>>mon>>bal;
	if(((int)mon%5)!=0)
	{
		cout<<setprecision(2)<<fixed<<bal;
		return 0;
	}
	
	if(mon>(bal-0.5))
	{
		cout<<setprecision(2)<<fixed<<bal;
		return 0;
	}
	else
	{
		bal-=(mon+0.5);
		cout<<setprecision(2)<<fixed<<bal;
		return 0;
		
	}
}
