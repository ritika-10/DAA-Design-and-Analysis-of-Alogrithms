#include<bits/stdc++.h>
using namespace std;

void bsearch(int a[], int l, int u, int key, int *o)
{
	int mid=(l+u)/2;
	if(l<=u)
	{
		if(a[mid]==key)
		{
			(*o)=(*o)+1;
			if(a[mid+1]==key && l!=u)
			{	
				(*o)=(*o)+1;
				bsearch(a,mid+2,u,key,o);
			}
			if(a[mid-1]==key && l!=u)
			{	
				(*o)=(*o)+1;
				bsearch(a,l,mid-2,key,o);
			}
		}
		else if(a[mid]>key)
		{
			bsearch(a,l,mid-1,key,o);
		}
		else
		{
			bsearch(a,mid+1,u,key,o);
		}
	}
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,occurance=0,key;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		cin>>key;
		bsearch(a,0,n-1,key,&occurance);
		if(occurance==0)
			cout<<"Key not present"<<endl;
		else
			cout<<key<<" - "<<occurance<<endl;
	}
	return 0;
}
