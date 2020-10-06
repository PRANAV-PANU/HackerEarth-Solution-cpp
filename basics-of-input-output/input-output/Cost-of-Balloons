#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t >0){       
        int purple,green;
        int countg=0,countp=0;
        cin>>green>>purple;    
        int ten;
        cin>>ten;
        countg=0;
        countp=0;
        int a,b;
        while(ten >0 ){
            cin>>a>>b;
            if(a==1)
                countg++;
            if(b==1)
                countp++;

            ten--;
        }
        int x = min((countg*green+countp*purple),(countg*purple + countp*green));
        cout<<x<<"\n";
        t--;
    }
    return 0;
}
