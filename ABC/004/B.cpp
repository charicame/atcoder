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
  char c[4][4];
  rep(i,4)rep(j,4)cin>>c[i][j];
  rep(i,4){
    rep(j,4)cout<<c[3-i][3-j]<<" ";
    cout<<endl;
  }
  return 0;
}