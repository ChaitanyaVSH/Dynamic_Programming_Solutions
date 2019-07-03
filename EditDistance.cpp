/*
TUSHAR ROY
EDIT DISTANCE (MINIMUM NO. OF STEPS TO CONVERT STR1 TO STR2)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Enter 2 Strings\n";
	string s1,s2;
	cin>>s1>>s2;
	
	int dp[s2.length()+1][s1.length()+1];
	dp[0][0]=0;
	
	for(int i=1;i<=s2.length();i++)dp[i][0]=i;
	for(int j=1;j<=s1.length();j++)dp[0][j]=j;
	
	for(int i=1;i<=s2.length();i++)
	{
		for(int j=1;j<=s1.length();j++)
		{
			if(s1[i-1]==s2[j-1])
			dp[i][j]=dp[i-1][j-1];
			
			else 
			dp[i][j]=1+min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1]);
		}
	}
	
	for(int i=0;i<=s2.length();i++)
	{
		for(int j=0;j<=s1.length();j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<dp[s2.length()][s1.length()];
	return 0;
}
