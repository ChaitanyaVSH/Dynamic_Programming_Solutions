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
	int arr[n],s[n]={};
	
	for(int i=0;i<n;i++)cin>>arr[i];
	
	s[0]=arr[0];
	s[1]=arr[1];
	
	for(int i=2;i<n;i++)
		s[i]=arr[i]+s[i-2];

	cout<<*max_element(s,s+n)<<endl;
	}
	return 0;
}
