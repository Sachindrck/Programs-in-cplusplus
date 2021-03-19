#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int a[12];
    int i;
    int t;
    cin >> t;
    
    for(i = 0;i<12;i++){
        a[i] = pow(2,i);
    }
    
    while(t--){
        int count = 0;
        unsigned int x;
        cin >> x;
        int z = 11;
        while(x!=0){
            if(x>=a[z]){
                x -= a[z];
                count++;
            }else{
                z--;
            }
            
    
        }
        cout<<count<<endl;
    }
    
    
    return 0;
}
