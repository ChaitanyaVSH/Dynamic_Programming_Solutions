#include<bits/stdc++.h>
using namespace std;

long dp[1001];

long f(int n)
{
	if(dp[n]!=-1)
	{
		cout<<"Returned "<<n<<endl;
		return dp[n]% 1000000007;
	}
	else 
	{
		dp[n]=f(n-1)+f(n-2);
		cout<<"Calculated "<<n<<endl;
		return dp[n]% 1000000007;
	}
}
int main()
{
	int noft,n;
	cin>>noft;
	while(noft--)
	{
		cin>>n;
		dp[0]=0;
		dp[1]=1;
		for(int i=2;i<=n;i++)dp[i]=-1;
		//for(int i=0;i<=n;i++)cout<<dp[i]<<" ";
		cout<<f(n)<<endl;
	}
}
