#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='L')
            a -= 1;
        else if(s[i] == 'R')
            a += 1;
        else if(s[i] == 'D')
            b -= 1;
        else
            b += 1;            
    }
    cout<<a<<" "<<b;
    return 0;
}
