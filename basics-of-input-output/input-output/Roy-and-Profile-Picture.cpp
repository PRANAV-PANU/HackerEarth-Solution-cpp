#include<bits/stdc++.h>
using namespace std;

int main(){
    int length;
    cin>>length;
    int t;
    cin>>t;
    while(t >0){
        int width,height;
        cin>>width;
        cin>>height;
        if(width < length || height < length)
            cout<<"UPLOAD ANOTHER"<<"\n";
        else if(width == height && width >= length && height >=length)
            cout<<"ACCEPTED"<<"\n";    
        else
            cout<<"CROP IT"<<"\n";

        t--;
    }
    return 0;
}
