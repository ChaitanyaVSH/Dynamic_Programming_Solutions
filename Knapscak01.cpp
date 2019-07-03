/*
Abdul bari and GFG
*/
#include<bits/stdc++.h>
#define maverick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
		maverick;
		int n,w;
		cin>>n>>w;
		long long int values[n+1]={},weights[n+1]={},t[n+1][w+1]={};
		
		for(int i=1;i<=n;i++)
		{
			cin>>weights[i];
			cin>>values[i];
		}
		
		
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=w;j++)
			{
				if(i==0||j==0)t[i][j]=0;
				else if(weights[i]>j)t[i][j]=t[i-1][j];
				else t[i][j]=max(t[i-1][j],values[i]+t[i-1][j-weights[i]]);
			}
		}
		
		/*for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=w;j++)
				cout<<t[i][j]<<" ";
			cout<<"\n";
		}*/
		
		cout<<"\n"<<t[n][w];
	return 0;
}
