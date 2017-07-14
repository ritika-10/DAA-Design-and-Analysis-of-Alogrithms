#include<iostream>
#include<algorithm>
using namespace std;

void Bsearch(int a[],int l, int u, int k)
{
	bool flag=false;
	int temp;
	while(l<=u)
	{	
		temp=(l+u)/2;
		if(a[temp]==k)
		{
			flag=true;
			break;
		}
		else if(a[temp]>k)
		{
			u=temp-1;
		}
		else
		{
			l=temp+1;
		}
	}	
	if(flag)
	{
		cout<<"PRESENT "<<k<<endl;
	}
	else
	{
		cout<<"NOT PRESENT "<<k<<endl;
	}
}

int main()
{
	int t;
	cout<<"Enter Number of Test cases: ";
	cin>>t;
	while(t--)
	{
		int n,key;
		cout<<"Enter Size of array: ";
		cin>>n;
		int a[n];
		cout<<"Enter Elements of the array: ";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<"Enter Key to search: ";
		cin>>key;
		sort(a,a+n);
		Bsearch(a,0,n-1,key);
	}
	return 0;
}
