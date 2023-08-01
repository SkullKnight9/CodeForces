#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t,a,b,c,d;

    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        if(max(a,b) < min(c,d) || min(a,b) > max(c,d)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

   
}