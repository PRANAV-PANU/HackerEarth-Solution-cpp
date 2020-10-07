#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count =0;
    int n = s.length();
    for(int i=0;i<n;i++){
        count += (s[i]-'a'+1);
    }
    cout<<count;
    return 0;
}
