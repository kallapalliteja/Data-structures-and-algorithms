#include<iostream>
using namespace std;
int pivotnumber(int arr[],int n)
{
	int s=0,e=n-1;
	int m=s+(e-s)/2;
	while(s<e)
	{
		if(arr[m]>=arr[0])
		{
			s=m+1;
		}
		else
		{
			e=m;
		}
		m=s+(e-s)/2;
	}
	return arr[s];
}
int main()
{
	int arr[10],n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	x=pivotnumber(arr,n);
	cout<<x<<endl;
	
	
	
}
