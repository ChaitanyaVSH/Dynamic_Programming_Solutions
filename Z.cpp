#include<bits/stdc++.h>
#define lli long long int 
#define speed_input_output ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
	speed_input_output;
	lli n,c;
	cin>>n>>c;
	unsigned long long int arr[n],dp[n]={};
	dp[0]=0;
	
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	if(i)dp[i]=18446744073709551615;
	}
	/*if(n==1)
	{
	cout<<0<<"\n";return 0;
	}*/
	
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			unsigned long long int hold=arr[i]-arr[j];
			unsigned long long int temp=dp[i]+(hold*hold);
			dp[j]=(dp[j]<temp+c?dp[j]:temp+c);
		}

	cout<<dp[n-1]<<endl;	
	return 0;
}
