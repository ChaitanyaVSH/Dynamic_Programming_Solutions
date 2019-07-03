#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,maxx;
	cin>>n;
	int price[n],dp[n+1]={};dp[0]=0;
	for(int i=0;i<n;i++)cin>>price[i];
	
	for(int i=1;i<=n;i++)
	{
		maxx=INT_MIN;
		for(int j=0;j<i;j++)maxx=max(maxx,price[j]+dp[i-j-1]);
		dp[i]=maxx;
	}
	
	for(int i=0;i<n;i++)cout<<dp[i]<<" ";
	cout<<endl;
	
	cout<<dp[n]<<endl;
	return 0;
}
