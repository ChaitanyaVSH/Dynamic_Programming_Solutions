#include<bits/stdc++.h>
#define paypal ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define lli long long int
using namespace std;

int main()
{
	paypal;
	lli n;
	cin>>n;
	lli arr[n][3],dp[n][3]={};
	for(int i=0;i<n;i++)
		for(int j=0;j<3;j++)
			cin>>arr[i][j];
			
	for(int i=0;i<3;i++)dp[0][i]=arr[0][i];
	
	for(int i=1;i<n;i++)
	{
		dp[i][0]=max(arr[i][0]+dp[i-1][1],arr[i][0]+dp[i-1][2]);
		dp[i][1]=max(arr[i][1]+dp[i-1][0],arr[i][1]+dp[i-1][2]);
		dp[i][2]=max(arr[i][2]+dp[i-1][0],arr[i][2]+dp[i-1][1]);
	}
	cout<<max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]))<<endl;
	return 0;
}
//ACCEPTED back tracking and DP
