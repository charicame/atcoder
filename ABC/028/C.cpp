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
  vector<int> a(5);
  rep(i,5)cin>>a[i];
  vector<int> ans;
  for(int i=0;i<5;i++)for(int j=i+1;j<5;j++)for(int k=j+1;k<5;k++){
    ans.push_back(a[i]+a[j]+a[k]);
  }
  sort(ans.rbegin(),ans.rend());
  cout<<ans[2]<<endl;
  return 0;
}