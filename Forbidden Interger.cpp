#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,k,x;
        int i,j;
        bool check = true;
        cin>>n>>k>>x;

        if(k==x==1){
            cout<<"NO"<<endl;
        }

        if( n%2 !=0 && k==2 && x==1){
            cout<<"NO"<<endl;
        }

        if(x!= 1){
            cout<<"Yes"<<endl;
            cout<<n*1<<endl;
            for(j=1;j<=(n*1);j++){
                cout<<"1"<<" ";
            }
            cout<<endl;
        }


        if(n % 2 == 0){

            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(i=1;i<=n;i++){
                cout<<"2"<<" ";
            }
            cout<<endl;
        }

    }

}
