#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int arr[n],dp[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	
	dp[0]=0;
	dp[1]=abs(arr[1]-arr[0]);
	
	for(int i=2;i<n;i++)
	{
		dp[i]=min(dp[i-1]+abs(arr[i]-arr[i-1]),dp[i-2]+abs(arr[i]-arr[i-2]));
	}
	//for(int i=0;i<n;i++)cout<<dp[i]<<" ";
	cout<<dp[n-1]<<endl;
	return 0;
}
//ACCEPTED back tracking
