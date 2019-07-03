#include<bits/stdc++.h>
using namespace std;

int main()
{
	int noft,n;
	cin>>noft;
	while(noft--)
	{
	cin>>n;
	long long int arr[n],dp[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	dp[0]=arr[0];
	
	for(int i=1;i<n;i++)
	{
		dp[i]=arr[i];
		for(int j=0;j<i;j++)
		{
			if(arr[j]<arr[i])
			dp[i]=max(dp[j]+arr[i],dp[i]);
		}
	}
	for(int i=0;i<n;i++)cout<<dp[i]<<" ";
	cout<<endl;
	cout<<*max_element(dp,dp+n)<<endl;
	}
	return 0;
}
