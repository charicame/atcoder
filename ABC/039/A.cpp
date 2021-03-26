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
  int a,b,c;cin>>a>>b>>c;
  int ans=0;
  ans+=2*a*b+2*a*c+2*b*c;
  cout<<ans<<endl;
  return 0;
}