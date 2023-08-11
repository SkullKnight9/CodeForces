#include<iostream>
using namespace std;

int main(){
    int n;
    int i;
    bool is_prime = true;

    cin >> n;
    int prime;
    prime = n/2;


    if(n % 2 == 0){
        cout<<prime<<endl;
        for(i=0;i<n/2;i++){
            cout<<"2 ";
        }
    } else {
        cout<<prime<<endl;
        for(i=0;i<n/2-1;i++){
            cout<<"2 ";
        }
        cout<<"3";
    }

}