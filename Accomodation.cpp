#include <iostream>
using namespace std;

int main() {
    int n,p,q,i;
    cin>>n;
    int count = 0;
    
    while(n--){
    
        cin>>p>>q;
        if(q-p >= 2){
            count+=1;
        }
    
        }
        
        cout<<count;
            return 0;
    }
