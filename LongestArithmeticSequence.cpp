#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n==1)return 1;
	int arr[n],dp[n];
	
	for(int i=0;i<n;i++)
	{
		dp[i]=2;
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			for(int k=j+1;k<n;k++)
				if(arr[j]-arr[i]==arr[k]-arr[j])
					dp[k]=max(dp[k],dp[j]+1);
			
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<dp[i]<<" ";
	cout<<"The highest is "<<*max_element(dp,dp+n);
	return 0;
}
