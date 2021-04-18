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
  lint n;cin>>n;
  lint x=(n/5)%30;
  lint y=n%5;
  vector<int> a(6);
  rep(i,6){
    a[i]=(x%6+1)+i;
    if(a[i]>6)a[i]-=6;
  }

  rep(i,y){
    lint tmp=a[i];
    a[i] =a[i+1];
    a[i+1]=tmp;
  }
  rep(i,6)cout<<a[i];
  cout<<endl;
  return 0;
}