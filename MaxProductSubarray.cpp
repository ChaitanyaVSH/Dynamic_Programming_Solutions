#include<bits/stdc++.h>
using namespace sts;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	
	int maxhere=1,maxprod=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxhere*=nums[i];
        if(maxhere>maxprod)
            maxprod=maxhere;
        if(maxhere<0)
            maxhere=1;
    }
    cout<<maxprod;
	return 0;
}
