#include<bits/stdc++.h>
using namespace std;
/*
HANDLE WHEN THE SIZE IS 0 AND 1

class Solution {
public:
    int rob(vector<int>& nums)
    {
        if(nums.size())
        {
        int n=nums.size();
        //vector<long long int> dp(nums.begin(),nums.end());
        long long int dp[n];
        for(int i=0;i<n;i++)dp[i]=nums[i];
        
        for(int i=0;i<n;i++)
            for(int j=i+2;j<n;j++)
                dp[j]=max(dp[j],dp[i]+nums[j]);
        if(nums.size()==1)return dp[n-1];
        return max(dp[n-2],dp[n-1]);
        }
        return 0;
    }
};

*/
int main()
{
	int n;
	cin>>n;
	int arr[n],dp[n]={};
	
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	dp[i]=arr[i];
	}
	
	for(int i=0;i<n;i++)
		for(int j=i+2;j<n;j++)
			dp[j]=max(dp[j],dp[i]+arr[j]);
	
	for(int i=0;i<n;i++)cout<<dp[i]<<" ";
	cout<<"\n";
	cout<<max(dp[n-2],dp[n-1]);
}
