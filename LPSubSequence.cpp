/*
IDESERVE
LONGEST PALINDROMIC SUBSEQUENCE
*/

#include<bits/stdc++.h>
using namespace std;

int lps(string s)
{
	cout<<"The algo. started with "<<s<<endl;
	if(s.length()==0)
		return 0;
	else if(s.length()==1)
		return 1;
	
	else if(s[0]==s[s.length()-1])
	{
		string r=s.substr(1,s.length()-2);
		cout<<"Returning 2+lps(r)"<<endl;
		return (2+lps(r));
	}
	
	else 
	{
		string fs=s.substr(0,s.length()-1);
		string ss=s.substr(1,s.length()-1);
		cout<<"FS "<<fs<<endl;
		cout<<"SS "<<ss<<endl;
		return max(lps(fs),lps(ss));
	}
}


int main()
{
	string s;
	cout<<"Enter  string\n";
	getline(cin,s);
	cout<<lps(s);
	return 0;
}
