//bubble sore
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
	    bool swapped= false;
		for(int j=0;j<n-i;j++) //j<n-i//-----> to decrease the  iterations of last
			{
				if(a[j]>a[j+1])
				{
					swap(a[j+1],a[j]);
					swapped=true;
				}
			}
			
		if(swapped==false)
		{
			break;
			}	
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
