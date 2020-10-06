#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int p = n%12;
        if(p==1)
            cout<<n+11<<" "<<"WS"<<"\n";
        else if(p==2)
            cout<<n+9<<" "<<"MS"<<"\n";
        else if(p==3)
            cout<<n+7<<" "<<"AS"<<"\n";
        else if(p==4)
            cout<<n+5<<" "<<"AS"<<"\n";
        else if(p==5)
            cout<<n+3<<" "<<"MS"<<"\n";
        else if(p==6)
            cout<<n+1<<" "<<"WS"<<"\n";
        else if(p==7)
            cout<<n-1<<" "<<"WS"<<"\n";
        else if(p==8)
            cout<<n-3<<" "<<"MS"<<"\n";
        else if(p==9)
            cout<<n-5<<" "<<"AS"<<"\n";
        else if(p==10)
            cout<<n-7<<" "<<"AS"<<"\n";
        else if(p==11)
            cout<<n-9<<" "<<"MS"<<"\n";
        else
            cout<<n-11<<" "<<"WS"<<"\n";        
        t--;
    }
    return 0;
}
