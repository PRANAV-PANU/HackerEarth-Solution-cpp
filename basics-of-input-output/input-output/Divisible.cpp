#include<bits/stdc++.h>
using namespace std;

string solve (vector<int> A) {
   // Write your code here
   int n = A.size();
   int d,Enum=0,Onum=0;
   for(int i=0;i<n/2;i++){
      d=A[i];
      while(d/10 >0){
         d /= 10;
      }
      if(i%2==0)
          Enum += d;
      else 
          Onum += d;    
   }
   for(int i=n/2;i<n;i++){
      d=A[i]%10;
      if(i%2==0)
          Enum += d;
      else 
          Onum += d;    
   }
   int x = abs(Enum-Onum);

   if(x==0||x%11==0) 
       return "OUI";
   else
       return "NON";    
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    string out_;
    out_ = solve(A);
    cout << out_;
}
