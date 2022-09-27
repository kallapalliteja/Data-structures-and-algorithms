#include<iostream>
using namespace std;
int binarysearch(int arr[],int a,int b,int k)
{
	int s=a,e=b;
	int m=s+(e-s)/2;
	while(s<e)
	{
		if(arr[m]==k)
		{
			return 1;
		}
		else if (arr[0]<k<=arr[m])
		{
			s=m+1;
		}
		else
		{
			e=m;
		}
		m=s+(e-s)/2;
	}
	return 0;
}
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
	return s;
}
int main()
{
	int arr[10],n,i,k,x,e,s,q,w;
	cin>>n;
	cin>>k;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	x=pivotnumber(arr,n);
	//z=binarysearch(arr,n,k,x);
	if(arr[s]<=k<=arr[x])
	{
		s=0,e=x-1;
		q=binarysearch(arr,s,e,k);
		if(q==1)
		{
			cout<<" present ";
		}
		else
		{
			cout<<" not present";
		}
	}
	else 
	{
		s=x,e=n-1;
		w=binarysearch(arr,s,e,k);
		if(w==1)
		{
			cout<<" present ";
		}
		else
		{
			cout<<" not present";
		}
	}
	
	
}
