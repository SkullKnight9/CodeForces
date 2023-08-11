#include<iostream>
using namespace std;

int main(){

int t;
//int sum = 0;

cin>>t;

while(t--){
    int sum = 0;
    int a,i;
    int n;
    cin>>a;
    for(i=0;i<a;i++){
        cin>>n;
        sum=sum+n;
    }
    if(sum%2 == 0){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;

    }

}


}