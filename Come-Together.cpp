#include<iostream>
using namespace std;

int main(){
 int t;
 cin>>t;
 int a,b,c,d,x,y;

 while (t--)
 {
    cin>>x>>y; // CURRENT LOCATION
    cin>>a>>b;// BOB's location
    cin>>c>>d;// Carol's Location

    if(c<=x && x<=a && d<=y && y<=b || b<=y && y<=d && a<=x && x<=c){
        cout<<"1"<<endl;
    }

    else{
    int r = (abs(a-x) + abs(b-y) + 1) + (abs(c-x) + abs(d-y) + 1) - (abs(a-c) + abs(b-d));
    int s = ((r+1)/2);
    cout<<s<<endl;

    }

  }

}