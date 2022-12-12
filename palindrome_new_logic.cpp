#include<iostream>
using namespace std;
bool palin(char a[],int n){
	int s=0,e=n-1;
	while(s<=e)
	{
		if(a[s]!=a[e])
		{
			return 0;
		}
		else
		{
			s++;
			e--;
		}
	}
	return 1;
}
int main()
{   
    int n;
    char a[100];
    cin>>n;
	cin>>a;
	if(palin(a,n))
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
