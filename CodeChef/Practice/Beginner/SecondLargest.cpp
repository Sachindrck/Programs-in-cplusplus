#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int T;
	cin>>T;
	while(T--)
	{
	long long int A,B,C ;
	cin>>A>>B>>C;
	if(A>=B&&A>=C)
	{
		if(B>=C)
		cout<<B<<endl;
		else
		cout<<C<<endl;
	}
	else if(B>=A&&B>=C)
    	{
		   if(A>=C)
		   cout<<A<<endl;
		   else
		   cout<<C<<endl;
	    }
	else
	{
	   if(A>=B)
	   cout<<A<<endl;
	   else
	   cout<<B<<endl;    
    }
	}
	return 0;
}
