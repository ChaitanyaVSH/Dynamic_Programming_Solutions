#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n],dp[n]={};
	for(int i=0;i<n;i++)cin>>arr[i];
	dp[0]=arr[0];
	dp[1]=max(arr[0],arr[1]);
	
	for(int i=2;i<n;i++) 
		dp[i]=max(arr[i],max(dp[i-1],dp[i-2]+arr[i]));//CAN HANDLE -VE AND +VE VALUES TOGETHER
	
	
	for(int i=0;i<n;i++)
		cout<<dp[i]<<" ";
	cout<<endl;
	cout<<dp[n-1];
	
	return 0;
}
