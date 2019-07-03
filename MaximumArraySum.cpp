#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int arr[n],dp[n]={};
	
	for(int i=0;i<n;i++)cin>>arr[i];
	dp[0]=arr[0],dp[1]=max(arr[0],arr[1]);
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+2;j<n;j++)
		{
			dp[j]=max(dp[j],dp[i]+arr[j]);
		}
	}
	/*for(int i=0;i<n;i++)
		cout<<dp[i]<<" ";
	cout<<endl;*/
	cout<<max(dp[n-1],dp[n-2])<<endl;
	return 0;
}
