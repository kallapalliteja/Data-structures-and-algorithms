#include<iostream>
#include<algorithm>//
#include<vector>
int merge_2_sortarrays(int arr1[],int m,int arr2[],int n,int arr3[],int p ){
	
	int i=0,j=0,k=0;
	while(i<m && j<n){
		if(arr1[i]<arr2[j])
		{
			arr3[k]=arr1[i];
			k++;
			i++;
		}
		else
		{
			arr3[k]=arr2[j];
			k++;
			j++;
		}
	}
	while(i<m){
		arr3[k]=arr1[i];
		k++;
		i++;
	}
	while(j<n){
		arr3[k]=arr2[j];
		k++;
		j++;
	}
}
using namespace std;
int main()
{
	int arr1[4]={1,2,3,4};
	int arr2[3]={5,6,7};
	int arr3[7];
	merge_2_sortarrays(arr1,4,arr2,3,arr3,7);
	for(int i=0;i<4+3;i++)
	{
		cout<<arr3[i]<<" ";
	}
	
	
	
}

