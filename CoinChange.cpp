#include<bits/stdc++.h>
#define maverick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;


int main()
{
	int sum,n;
	cin>>sum>>n;
	
	int coins[n];
	int dp[n+1][sum+1]={};
	
	for(int i=1;i<=sum;i++)dp[0][i]=0;
	
	for(int i=0;i<n;i++)
	{
	cin>>coins[i+1];
	dp[i][0]=1;
	}
	dp[n][0]=1;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(coins[i]<=j)
				dp[i][j]=dp[i-1][j]+dp[i][j-coins[i]];
			else
				dp[i][j]=dp[i-1][j];
		}
	}
	
/*	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=sum;j++)
			cout<<dp[i][j]<<" ";
		cout<<"\n";
	}*/
	cout<<dp[n][sum]<<endl;
	return 0;
}
