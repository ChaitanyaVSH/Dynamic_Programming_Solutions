#include<bits/stdc++.h>
using namespace std;

int main()
{
	int noft,n;
	cin>>noft;
	while(noft--)
	{
		cin>>n;
		int arr[n],brr[n];
		int dp[n];
		
		for(int i=0;i<n;i++)
		{
		cin>>arr[i]>>brr[i];dp[i]=1;
		}
		
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(brr[j]<arr[i])
				{
					dp[i]=max(dp[j]+1,dp[i]);
				}
			}
		}
		
		for(int i=0;i<n;i++)cout<<dp[i]<<" ";
		cout<<endl;
		cout<<*max_element(dp,dp+n)<<endl;
	}
	return 0;
}
