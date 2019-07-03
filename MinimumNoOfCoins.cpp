#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cout<<"Enter total amount\n";
	cin>>N;
	int n;
	cout<<"Enter total no. of coins\n";
	cin>>n;
	int coins[n];
	cout<<"Enter the coins or denominations\n";
	for(int i=0;i<n;i++)cin>>coins[i];
	
	int dp[N+1];
	dp[0]=0;
	for(int i=1;i<=N;i++)dp[i]=INT_MAX;
	
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=coins[i];j<=N;j++)
		{
			cout<<j<<"_"<<coins[i]<<" ";
			dp[j]=min(dp[j],1+dp[j-coins[i]]);
		}cout<<endl;
	}
	
	for(int i=0;i<=N;i++)cout<<dp[i]<<" ";
	return 0;
}
