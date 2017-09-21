#include<bits/stdc++.h>
using namespace std;

void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}

void insertion_sort(int a[], int n)
{
	int comp=0, swap=0;
	for(int i=1;i<n;i++)
	{
		int temp=a[i],j;
		for(j=i-1;j>=0;j--)
		{
			comp++;
			if(a[j]>temp)
			{
				swap++;
				a[j+1]=a[j];
			}
			else
				break;
		}
		swap++;
		a[j+1]=temp;
	}
	print(a,n);
	cout<<"COMP: "<<comp<<endl;
	cout<<"SWAPS: "<<swap<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		insertion_sort(a,n);
	}
	return 0;
}
