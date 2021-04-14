#include <iostream>
using namespace std;

int main() 
{
	int WITD ; 
	double OAM , New , BaL , P=0.50 ;
	
	cin>>WITD;
	cin>>OAM;
	
	if(((WITD +P) <=OAM) && (WITD%5==0))
    {
    New=OAM-(WITD+P);
    
    cout<<New;
    }
    
    else
    {
    cout<<OAM;
    }
    
	return 0;
}
