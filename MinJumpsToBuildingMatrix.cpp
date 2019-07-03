#include<bits/stdc++.h>
using namespace std;

int main()
{
	int noft,r,c;
	cin>>noft;
	while(noft--)
	{
		cin>>r>>c;
		int m[r][c];
		
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				cin>>m[i][j];
		
		int dp[r][c];
		dp[0][0]=m[0][0];
		
		for(int i=1;i<r;i++)dp[i][0]=dp[i-1][0]+m[i][0];
		for(int j=1;j<c;j++)dp[0][j]=dp[0][j-1]+m[0][j];
		
		//int steps=0;
		
		for(int i=1;i<r;i++)
			for(int j=1;j<c;j++)
				dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+m[i][j];
		
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<dp[r][c]<<endl;
		
	}
	return 0;
}
