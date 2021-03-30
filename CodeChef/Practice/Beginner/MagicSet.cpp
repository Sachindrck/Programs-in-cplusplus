
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int count =0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%m==0)
            count++;
        }
        long long res = 1;
        while(count --) {
            res *= 2;
        }
        cout << res - 1 << endl;
        
    }
return 0;
}
