#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t >0){
    string s1,s2;
    cin>>s1>>s2;
    int a[26],b[26];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    for(int i=0;i<s1.length();i++)
        a[s1[i]-'a']++;
    for(int j=0;j<s2.length();j++)
        b[s2[j]-'a']++;
    int count=0;    
    for(int k=0;k<26;k++)
        count += abs(a[k]-b[k]);     
    cout<<count<<"\n";
    t--;
    }
    return 0;
}
