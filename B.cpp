#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
	lli n,k;
	cin>>n>>k;
	lli arr[n],dp[n];dp[0]=0;
	
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	if(i)dp[i]=INT_MAX;
	}
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n&&j<=k+i;j++)
			dp[j]=min(dp[j],dp[i]+abs(arr[i]-arr[j]));
	
	//for(int i=0;i<n;i++)cout<<dp[i]<<" ";
	cout<<dp[n-1]<<endl;	
	return 0;
}
//ACCEPTED pure DP
