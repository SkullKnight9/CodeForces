#include <iostream>
using namespace std;

int main() {
     int k,n,w;
     int i, sum;
     sum = 0;
     
     cin>>k>>n>>w;
     
     for(i=1;i<=w;i++){
         sum += i*k;
         
     }
     
     int diff;
     diff = sum - n;
     
     if(n - sum > 0){
         cout<<"0";
     }
     
     else{
         cout<<diff;
     }

    return 0;
}