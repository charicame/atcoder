#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
#include<map> //map
#include<set> //set
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
  string a,b,c;cin>>a>>b>>c;
  if(a[a.size()-1]==b[0]&&b[b.size()-1]==c[0])cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}