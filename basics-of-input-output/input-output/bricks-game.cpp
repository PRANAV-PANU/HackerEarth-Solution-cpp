#include<bits/stdc++.h>
using namespace std;

int main(){
    int bricks;
    cin>>bricks;
    int pick,n=0;
    for(int i=1;n<bricks;i++){
        pick=i;
        n += pick;
        if(n>=bricks){
            cout<<"Patlu";
            break;
        }
        pick = 2*i;
        n += pick;
        if(n>= bricks){
            cout<<"Motu";
            break;
        }

    }
    return 0;
}
