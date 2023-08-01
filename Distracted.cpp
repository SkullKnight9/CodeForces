#include <iostream>
#include <string>
#include  <bits/stdc++.h>
using namespace std;


int main() {
    int t,n,j,k;
    bool check = true;
    cin>>t;
    int i =0;
    for(i=0;i<t;i++){
        check=true;
        cin>>n;
        string str;
        cin>>str;
        for(j=0;j<=n;j++){
            for(int z=j+1;z<=n;z++){
                if(str[j] == str[z] && check){
                    if (str[z-1] != str[j]){
                        cout<<"NO"<<endl;
                        check = false;
                        break;
                    }
                }
                           
                }
            }
            
        
        if(check)
            cout<<"YES"<<endl;
    }
    return 0;
}