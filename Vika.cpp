#include<iostream>
#include<cstdlib>
using namespace std;


int main(){

int t,i,j,n,m;
int k,a,b,x,y;
cin>>t; //test cases.

while(t--){
    bool check = true;
    cin>>n>>m; //size of mall.
    cin>>k; //number of Vika's friends.
    cin>>x>>y; //Vika's location

    for(i=1;i<=k;i++){
        cin>>a>>b; // location of each friend;
        if((abs(x-a) + abs(y-b)) % 2 == 0){
            check = false;
        }
    }
    if(!check){
        cout<<"NO"<<endl;
    }
    if(check){
            cout<<"YES"<<endl;
        }

    
  }
}







