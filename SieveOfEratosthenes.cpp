#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,noft;
	cin>>noft;
	while(noft--)
	{
	cin>>n;
	
	bool dp[n+1]={};
	memset(dp,1,sizeof(dp));
	
	for(int i=2;i*i<=n;i++)
		if(dp[i])
			for(int j=i*i;j<=n;j=j+i)
				dp[j]=0;
	
	for(int i=2;i<=n;i++)
		if(dp[i])
			cout<<i<<" ";
	
	cout<<endl;
	}
	
	return 0;
}
