#include<bits/stdc++.h>
using namespace std;

int main()
{
	int noft,n;
	cin>>noft;
	while(noft--)
	{
		cin>>n;
		int arr[n],is[n],ds[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		
		for(int i=0;i<n;i++)is[i]=ds[i]=1;
		
		for(int i=1;i<n;i++)
			for(int j=0;j<i;j++)
				if(arr[j]<arr[i])
					is[i]=max(is[i],is[j]+1);
					
		for(int i=n-2;i>=0;i--)
			for(int j=n-1;j>i;j--)
				if(arr[j]<arr[i])
					ds[i]=max(ds[i],ds[j]+1);
		
		/*for(int i=0;i<n;i++)cout<<is[i]<<" ";
		cout<<endl;
		for(int i=0;i<n;i++)cout<<ds[i]<<" ";
		cout<<endl;*/
		
		int maxx=is[0]+ds[0]-1;   //Since arr[i] is present in both the IS and DS
		for(int i=1;i<n;i++)
		{
			maxx=max(maxx,is[i]+ds[i]-1);
		}
		cout<<maxx<<endl;
	}
	return 0;
}
