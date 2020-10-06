#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    long answer=1;
    int x = 1000000007;
    for(int i=0;i<n;i++){
        cin>>a[i];
        answer = (answer*a[i])%x;
    }
    cout<<answer;
    return 0;
}
