#include<bits/stdc++.h>
#define maverick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define fori(a,b) for(int i=a;i<b;i++)
#define forj(a,b) for(int j=a;j<b;j++)
using namespace std;

int n;
ll dp[1000][1000];

ll summed(int i1,int j1,int i2,int j2)
{
	 if(i1==0&&j1==0)return dp[i2][j2];
	 else if(i1==0)return dp[i2][j2]-dp[i2][j1-1];
	 else if(j1==0)return dp[i2][j2]-dp[i1-1][j2];
	 return dp[i2][j2]-dp[i2][j1-1]-dp[i1-1][j2]+dp[i1-1][j1-1];
}

int main()
{
	int i1,j1,i2,j2;
	cin>>n;
	ll arr[n][n];
	
	fori(0,n)
		forj(0,n)
			cin>>arr[i][j];
			
	dp[0][0]=arr[0][0];
	
	fori(1,n)
		dp[0][i]=dp[0][i-1]+arr[0][i];
	fori(1,n)
		dp[i][0]=dp[i-1][0]+arr[i][0];
	
	fori(1,n)
		forj(1,n)
			dp[i][j]=dp[i-1][j]+arr[i][j]+(dp[i][j-1]-dp[i-1][j-1]);
		
	
	fori(0,n)
	{
		forj(0,n)
			cout<<dp[i][j]<<" ";
		cout<<"\n";
	}
	
	cout<<"\nEnter i1 j1 ad i2 j2\n";
	cin>>i1>>j1>>i2>>j2;
	cout<<summed(i1,j1,i2,j2);
	return 0;
}
