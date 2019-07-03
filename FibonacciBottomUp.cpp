#include<bits/stdc++.h>
#define intt long long int
#define maverick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define M 100000
using namespace std;

intt dp[M];

void Fibonacci(intt n)
{
	for(int i=2;i<=n;i++)
		dp[i]=dp[i-1]+dp[i-2];
}

void printFibonacci(intt n)
{
	for(int i=0;i<=n;i++)
		cout<<dp[i]<<" ";
}

int main()
{
	maverick;
	dp[0]=dp[1]=1;
	intt n;
	cout<<"Enter N\n";
	cin>>n;
	Fibonacci(n);
	printFibonacci(n);
	return 0;
}
