#include <bits/stdc++.h>
using namespace std;

 
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
 
int main(){
  cout<<fixed<<setprecision(15);
 
  int n;cin>>n;
  vector<long> x(n);
  rep(i,n)cin>>x[i];
 
  long M=0;
  rep(i,n)M+=abs(x[i]);
  cout<<M<<endl;
 
  long Y=0;
  rep(i,n)Y+=abs(x[i])*abs(x[i]);
  cout<<sqrt(Y)<<endl;
 
  long T=0;
  rep(i,n)T=max(T,abs(x[i]));
  cout<<T<<endl;
  return 0;
}