/*
TUSHAR ROY
LONGEST INCREASING SUBSEQUNECE
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int noft;
    cin>>noft;
    while(noft--)
    {
	int n;
	cin>>n;
	int arr[n],dp[n]={};
	
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++)dp[i]=1;

	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]<arr[i])
			{
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	int ma=-1;
	for(int i=0;i<n;i++)
	ma=max(ma,dp[i]);
	
	//cout<<ma<<endl;
	cout<<*max_element(dp, dp+n);*/
    }
}
