#include<iostream>
using namespace std;
int main()
{
	int arr[100],n,temp;
	cin>>n;
	for(int i=0; i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<n;i++){
		temp=arr[i];
		int j=i-1;
		for(;j>=0;j--)
		{
			if(arr[j]>temp)
			{
				arr[j+1]=arr[j];
			}
			else
			{
				break;
			}
		}
		arr[j+1]=temp;
	}
	for(int l=0;l<n;l++)
	{
		cout<<arr[l]<<" ";
	}
}
