#include<iostream>
#include<algorithm>
using namespace std;

bool range(int a[],int n,int *l,int *u, int key)
{	
	bool flag=false;
	int ll=0,ul=1;
	while(ul<n)
	{
		if(a[ul]>=key)
		{
			flag=true;
			break;
		}
		ll=ul;
		ul=ul*2;
		if(ul>n && ll!=ul)
		{
			ul=n;
		}
	}
	*l=ll;
	*u=ul;
	return flag; 
}

void Jsearch(int a[], int n, int k)
{
	bool flag=false,check;
	int temp,l=0,u=n-1;
	check=range(a,n,&l,&u,k);
	if(check)	
	{
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
		Jsearch(a,n,key);
	}
	return 0;
}
