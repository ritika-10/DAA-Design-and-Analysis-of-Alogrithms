#include<iostream>
using namespace std;

void Lsearch(int a[], int n, int k)
{
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			flag=true;
			break;
		}
	}
	if(flag==true)
		cout<<"PRESENT "<<k<<endl;
	else
		cout<<"NOT PRESENT "<<k<<endl;
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
		Lsearch(a,n,key);
	}
	return 0;
}
