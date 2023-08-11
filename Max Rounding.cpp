#include <iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<cmath>

using namespace std;

int countDigit(long long n)
{
    int count=0;
    while (n != 0) {
        count++;
        n = n / 10;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    int n;
    int i,j,digit,temp,k,h;
    while(t--){
        cin >> n;
        int temp=n;
        int original;
        original = n;
        int maxnum=max(n,0);
        h = countDigit(n);
        if(n < 5){
            cout << n << endl;
        }
        else if(n>=5 && n<=10){
            cout << 10 << endl;
        }
        else{
        for(k=1; k<=h;k++){
            digit = temp % 10;
            if(digit >= 5){
                n = n + pow(10,k) - (pow(10,k-1)*digit);
            }
            else{
                n = n - (pow(10,k-1) * digit);
            }
            temp=n/pow(10,k);
            maxnum=max(maxnum,n);
            temp%=10;
        }
        cout<<maxnum<<endl;
    }
 }
}
        


    




