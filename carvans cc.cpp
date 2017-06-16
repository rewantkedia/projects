//commit
//git
//git
//git
//git

//git


#include<iostream>
using namespace std;
main()
{
	int t;
	cin>>t;
	cout<<endl;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i =0; i<n ; i++)
		{
			cin>>arr[i];
		}
		cout<<endl;
		int count = 1;
		for(int i =0 ; i<(n-1); i++)
		{
			if(arr[i+1]<=arr[i])
			count++;
			if(arr[i]<arr[i+1])
			arr[i+1]=arr[i];
		}
    	cout<<count<<endl;
	}
}
