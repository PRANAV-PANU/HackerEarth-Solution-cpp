#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag = false;
    for(int i=0;i<n-1;i++){
        if(s[i]=='H' && s[i+1]=='H'){
            flag=true;
            break;
        }
    }

    if(flag){
        cout<<"NO"<<"\n";
    }else{
        cout<<"YES"<<"\n";
        for(int i=0;i<n;i++){
            if(s[i] == '.'){
                s[i] = 'B';
            }
            cout<<s[i];
        }
    }
}
