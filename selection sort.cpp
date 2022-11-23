//selection sore
#include<iostream>
using namespace std;
int main()
{
	int a[50],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		int minindx=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[minindx]>a[j])
			{
				minindx=j;
			}
		}
		swap(a[minindx],a[i]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
