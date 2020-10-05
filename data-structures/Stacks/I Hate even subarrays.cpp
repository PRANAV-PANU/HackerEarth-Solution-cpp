#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t >0){
        string s;
        cin>>s;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
            }else{
                if(st.top() == s[i]){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }
        string c;
        if(st.empty()){
            cout<<"KHALI"<<"\n";
        }else{
            while(!st.empty()){
                char x = st.top();
                st.pop();
                c.push_back(x);
            }
            reverse(c.begin(),c.end());
            cout<<c<<"\n";
        }
        t--;
    }

    return 0;
}
