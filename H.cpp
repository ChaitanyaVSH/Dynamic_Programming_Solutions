#include<bits/stdc++.h>
using namespace std;

int main()
{
	char temp;
	int r,c;
	cin>>r>>c;
	long long int grid[r][c]={},dp[r][c]={};
	dp[0][0]=1;
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>temp;
			grid[i][j]=((temp=='.')?1:0);
			if(!i&&j)dp[0][j]=grid[0][j]&dp[0][j-1];
			else if(i&&!j)dp[i][0]=grid[i][0]&dp[i-1][0];	
		}
	}
	
	for(int i=1;i<r;i++)
		for(int j=1;j<c;j++)
			dp[i][j]=((grid[i][j])?dp[i-1][j]+dp[i][j-1]:0)%1000000007;	

	cout<<dp[r-1][c-1]<<"\n";
	return 0;
}
