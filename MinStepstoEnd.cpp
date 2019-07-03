#include<bits/stdc++.h>
using namespace std;

int main()
{
	int noft,n;
	cin>>noft;
	while(noft--)
	{
		cin>>n;
		int arr[n],dp[n]={};
		//dp[0]=0;
		for(int i=0;i<n;i++)cin>>arr[i];
		
		if(arr[0])
		{
			for(int i=0;i<n;i++)
			{
			for(int j=i+1;j<=arr[i]+i&&j<n;j++)
			{	
				if(!dp[j])dp[j]=INT_MAX;
				dp[j]=min(dp[i]+1,dp[j]);
			}
			}
			cout<<((dp[n-1]==INT_MAX||dp[n-1]==0)?-1:dp[n-1])<<endl;
		}
		else
			cout<<-1<<endl;
	}
	return 0;
}
