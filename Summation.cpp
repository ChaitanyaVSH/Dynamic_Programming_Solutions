#include<bits/stdc++.h>
#define maverick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define for(a,b) for(int i=a;i<b;i++)
using namespace std;

int main()
{
	maverick;
	int n,i,j;
	ll sum=0;
	
	cin>>n;
	int arr[n],prefix[n]={};
	cin>>arr[0];
	prefix[0]=arr[0];
	
	for(1,n)
	{
	cin>>arr[i];
	prefix[i]=prefix[i-1]+arr[i];
	}
	
	cin>>i>>j;
	cout<<((i==0)?prefix[j]:prefix[j]-prefix[i-1]);
	
	
	return 0;
}
