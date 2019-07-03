#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,noft;
	cin>>noft;
	while(noft--)
	{
	cin>>n;
	long long int sum=0;
		
	bool dp[n+1]={}; dp[0]=dp[1]=1;
	
	for(int i=2;i<=n;i++)
	{
		if(dp[i]==0)
			sum+=i;
		for(int j=i*i;j<=n;j=j+i)	
			dp[j]=1;
	}
	
	cout<<sum<<endl;
	}
	
	return 0;
}
