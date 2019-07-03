#include<bits/stdc++.h>
using namespace std;


int rec(int n,int k)
{
	cout<<"Call for "<<n<<" "<<k<<"\n";
	if(k==0||k==n)
		return 1;
	else
		return rec(n-1,k-1)+rec(n-1,k);
}

int main()
{
	cout<<"Enter n and k\n";
	int n,k;
	cin>>n>>k;
	cout<<"The coefficient is "<<rec(n,k);
	return 0;
}
