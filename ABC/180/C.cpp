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
  
  set<lint> ans;
  for(lint i=1;i*i<=n;i++){
    if(n%i==0){
      ans.insert(i);
      ans.insert(n/i);
    }
  }

  for(auto x:ans)cout<<x<<endl;
  return 0;
}