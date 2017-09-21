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

void selection_sort(int a[], int n)
{
	int comp=0, swap=0;
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			comp++;
			if(a[min]>a[j])
				min=j;
		}
		swap++;
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
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
		selection_sort(a,n);
	}
	return 0;
}
