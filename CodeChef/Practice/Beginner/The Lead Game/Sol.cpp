#include <iostream>
using namespace std;

int main() {
	 int t,sc1=0,sc2=0,w,l=0;
    cin>>t;
    while(t--)
    {
     int s1,s2,lead,win;
     cin>>s1>>s2;
     sc1=sc1+s1;
     sc2=sc2+s2;
     if(sc1>sc2)
     {
         lead=sc1-sc2;
         win=1;
        }
     else{
        lead=sc2-sc1;
        win=2;
     }
     if(lead>l)
     {
         l=lead;
        w=win;
     }
   }
    cout<<w<<" "<<l<<endl;
	return 0;
}
