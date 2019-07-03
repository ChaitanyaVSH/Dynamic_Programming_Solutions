#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Enter n and k\n";
	int n,k;
	cin>>n>>k;

	long long int c[n+1][k+1]={};
		
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=k;j++)
		{
			if(j==0||j==i)
				c[i][j]=1;
			else
				c[i][j]=c[i-1][j-1]+c[i-1][j];
		}
	}
	
	cout<<"\nThe BC is "<<c[n][k]<<"\n";
	
	
	//DISPLAYING MAT
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=k;j++)
			cout<<c[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
