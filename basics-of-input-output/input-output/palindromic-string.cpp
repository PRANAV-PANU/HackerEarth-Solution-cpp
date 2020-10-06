#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool flag = true;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i] !=s[n-i-1]){
           flag = false;
           break;
        }
    }
    if(flag)
        cout<<"YES"<<"\n";
    else 
        cout<<"NO"<<"\n";    
    return 0;
}
