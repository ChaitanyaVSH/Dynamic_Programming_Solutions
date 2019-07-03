/*
GFG
MINIMUM COST PATH
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Enter m and n of cost[][]\n";
	int r,c;
	cin>>r>>c;
	int cost[r][c];
	
	cout<<"Enter costs\n";
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			cin>>cost[i][j];
	
	cout<<"Enter m and n\n";
	int m,n;
	cin>>m>>n;
	
	int dp[m][n];
	dp[0][0]=cost[0][0];				 //FILLING THE TOP LEFT CORNER
	
	for(int i=1;i<=m;i++)
	dp[i][0]=dp[i-1][0]+cost[i][0];		//FILLING 1st COLUMN
	
	for(int j=1;j<=n;j++)
	dp[0][j]=dp[0][j-1]+cost[0][j];		//FILLING 1st ROW
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			dp[i][j]=min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1])+cost[i][j];
		}
	}
	
	cout<<dp[m][n];
}
