#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r)
{
	int n1=m-l+1, n2=r-m;
	int right[n2], left[n1];
	for(int i=0;i<n1;i++)
		left[i]=a[l+i];
	for(int i=0;i<n2;i++)
		right[i]=a[m+i+1];
	int i=0,j=0,k=l;
	while(i<n1 && j<n2)
	{
		if(left[i]<right[j])
			a[k++]=left[i++];
		else
			a[k++]=right[j++];
	}
	while(i<n1)
	{
		a[k++]=left[i++];
	}
	while(j<n2)
	{
		a[k++]=right[j++];
	}
}

void mergesort(int a[], int l, int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,r);
		merge(a,l,mid,r);
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
		mergesort(a,0,n-1);
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}
