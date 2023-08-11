#include <iostream>
#include<bits/stdc++.h>
#include <list>
using namespace std;

int main() {
    int i;
    int n;
    cin>>n;
    int best,worst,count;
    
    int myGames[n];
    
    for(i=0;i<n;i++){
        cin>>myGames[i];
    }
   //best = *max_element(myGames, myGames + n);
    //worst = *min_element(myGames, myGames + n);
    best = myGames[0];
    worst = myGames[0];
    count = 0;
    
    for(i=0;i<n;i++){
        if(myGames[i] > best){
            best = myGames[i];
            count+=1;
        }
        if(myGames[i] < worst){
            worst = myGames[i];
            count+=1;
        }
    }
    cout<<count;
    
}