#include<bits/stdc++.h>
#define lli long long int
#define boostup ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main()
{
	boostup;
	lli sum,m;
	cin>>sum>>m;
	lli coins[m],dp[sum+1]={};
	dp[0]=0;
	for(int i=0;i<m;i++)cin>>coins[i];

	
	
	for(int i=1;i<=sum;i++)
	{
		dp[i]=INT_MAX;
		for(int j=0;j<m;j++)
		{
			if(coins[j]<=i)
			{
				dp[i]=min(1+dp[i-coins[j]],dp[i]);
			}
		}
	}
	
	for(int i=0;i<=sum;i++)cout<<dp[i]<<" ";
	cout<<"\n"<<dp[sum];
	return 0;
}
