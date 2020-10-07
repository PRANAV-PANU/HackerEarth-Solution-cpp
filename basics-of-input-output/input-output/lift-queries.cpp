#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    int a=0;
    int b=7;
    while(t-- >0){
        cin>>n;
        if(abs(a-n) == abs(b-n)){
            a=n;
            cout<<"A"<<"\n";
        }else if(abs(a-n)>abs(b-n)){
            b=n;
            cout<<"B"<<"\n";
        }else{
            a=n;
            cout<<"A"<<"\n";
        }
    }
    return 0;
}
