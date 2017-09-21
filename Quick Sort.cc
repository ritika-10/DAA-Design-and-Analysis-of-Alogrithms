#include<bits/stdc++.h>
using namespace std;

int pivot(int a[], int l, int r)
{
	int p=a[r];
	int i=l-1,j=l;
	while(j<r)
	{
		if(a[j]<p)
		{
			i++;
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		j++;
	}
	int temp=a[i+1];
	a[i+1]=a[r];
	a[r]=temp;
	return i+1;
}

void quicksort(int a[], int l, int r)
{
	if(l<r)
	{
		int p=pivot(a,l,r);
		quicksort(a,l,p-1);
		quicksort(a,p+1,r);
	}
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
		quicksort(a,0,n-1);
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}

