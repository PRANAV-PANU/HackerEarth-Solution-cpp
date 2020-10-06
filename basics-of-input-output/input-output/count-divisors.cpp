#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r,k;
    cin>>l>>r>>k;
    if(r%k==0 || l%k==0)
        cout<<r/k-l/k+1;
    else 
        cout<<r/k-l/k;     
    return 0;
}
