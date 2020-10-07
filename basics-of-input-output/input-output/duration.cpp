#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int sh,sm,eh,em;
    int wh,wm;
    while(t-- >0){
        cin>>sh>>sm>>eh>>em;
        if(sm > em){
            wm = 60-sm + em;
            wh = eh-sh-1;
        }else{
            wm = em-sm;
            wh = eh-sh;
        }
        cout<<wh<<" "<<wm<<"\n";
    }
    return 0;
}
