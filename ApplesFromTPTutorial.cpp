#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	long long int arr[n][m],dp[n][m]={};
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
			if(i==0&&j==0)dp[0][0]=arr[0][0];
			else if(i==0&&j!=0)dp[0][j]=dp[0][j-1]+arr[i][j];
			else if(j==0&&i!=0)dp[i][0]=dp[i-1][0]+arr[i][j];
		}
	}

	for(int i=1;i<n;i++)
		for(int j=1;j<m;j++)
			dp[i][j]=arr[i][j]+max(dp[i-1][j],dp[i][j-1]);
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<dp[i][j]<<" ";
		cout<<"\n";
	}
	cout<<"\n"<<dp[n-1][m-1];
	return 0;
}
