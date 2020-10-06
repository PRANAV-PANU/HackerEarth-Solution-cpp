#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int countz=0,counto=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='z')
            countz++;
        else
            counto++;    
    }
    if(counto == 2*countz)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";    
    return 0;
}
