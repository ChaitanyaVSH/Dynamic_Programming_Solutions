#include<bits/stdc++.h>
using namespace std;

int main()
{
	int noft;
	cin>>noft;
	while(noft--)
	{
	int r,c;
	cout<<"Enter r and c\n";
	cin>>r>>c;
	int m[r][c],s[r][c]={};
	
	cout<<"Enter the elements\n";
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			cin>>m[i][j];
			
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i==0||j==0)
				s[i][j]=m[i][j];
			else if(m[i][j]==1)
				s[i][j]=min(min(s[i-1][j-1],s[i-1][j]),s[i][j-1])+1;
			else
				s[i][j]=0;
		}
	}	
	
	int maxx=INT_MIN;
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(s[i][j]>maxx)
				maxx=s[i][j];
			cout<<s[i][j]<<" ";
		}
		cout<<"\n";
	}
	//cout<<"\nThe maximum size is "<<maxx;
	cout<<maxx<<"\n";
	}
	return 0;
}
