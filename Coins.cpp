#include<iostream>
using namespace std;

int main (){

    int t,a,b,c,n;
    int sum = 0;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>n;
        sum = a + b + c + n;
        if(sum % 3 != 0 || sum/3 < a || sum/3 < b || sum/3 < c){
            cout<<"NO"<<endl;
        }

        else{
            cout<<"YES"<<endl;
        }

    }

}



