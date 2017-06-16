#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	cout<<endl;
	while(t--)
	{
		int n,x,t,sum=0;
		cin>>n>>x;
		cout<<endl;
		for(int  i = 0 ; i<n ; i++)
		{
			cin>>t;
			sum+=t;
		}
		int val = sum /  x;
		if(val<n)
		cout<<-1<<endl;
		else
		cout<<val<<endl;
		
	}
}
