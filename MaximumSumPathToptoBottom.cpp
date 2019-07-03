#include<bits/stdc++.h>
#define less INT_MIN
using namespace std;

int main()
{
	int r,c;
	cout<<"Enter no of rows ad columns\n";
	cin>>r>>c;
	int mat[r][c],dp[r][c]={};
	cout<<"Enter the elements\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>mat[i][j];
			if(i==0)
				dp[0][j]=mat[0][j];
			else if(j==0)
				dp[i][0]=mat[i][0];
			else if(j==c-1)
				dp[i][j]=mat[i][j];
			else
				dp[i][j]=less;
		}
	}
	
	for(int i=1;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(j==0)
				dp[i][j]=max(dp[i][j],dp[i][j]+dp[i-1][j+1]);
			else if(j==c-1)
				dp[i][j]=max(dp[i][j],dp[i][j]+dp[i-1][j-1]);
			else
				dp[i][j]=max(mat[i][j]+dp[i-1][j-1],mat[i][j]+dp[i-1][j+1]);
		}
	}
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}
	cout<<*max_element(dp[r-1],dp[r-1]+c);
	return 0;
}
