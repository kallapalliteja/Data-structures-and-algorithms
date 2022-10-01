#include<iostream>
using namespace std;
int sqrt(int a)
{
	int s=0,l=a/2;
	int sq,p;
	int m=s+(l-s)/2;
	while(s<=l)
	{   
	    sq=m*m;
	    if(sq==a)
	    {
	    	return m;
		}
		if(sq>a)
		{
			 l=m;
		}
		else
		{    p=m;
			s=m+1;
		}
		m=s+(l-s)/2;	
	}
	return p;
	
	
}
int main()
{
	int a;
	cin>>a;
	cout<<sqrt(a);
	
}
