/*
KADANNE ALGORITHM
Time = O(n)
Space =O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int noft,n;
	cin>>noft;
	
	while(noft--)
	{
		int me=0,ms=0,ws=0;
		cin>>n;
		int arr[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]>=0)
				ws+=arr[i];
		}
		
		for(int i=0;i<n;i++)
		{
			me+=arr[i];
			
			if(me>ms)
				ms=me;
			if(me<0)
				me=0;
		}
		
		int maxx=INT_MIN,count=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]<0)
			count++;
			maxx=max(maxx,arr[i]);
		}
		if(count==n)
		{
			ms=ws=maxx;
		}
		
		cout<<ms<<" "<<ws<<endl;
	}
	
	return 0;
}
