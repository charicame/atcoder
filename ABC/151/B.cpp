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
    int n,k,m;cin>>n>>k>>m;
    int sum=0;
    rep(i,n-1){
        int tmp;cin>>tmp;
        sum+=tmp;
    }
    int tgt=n*m;
    tgt-=sum;
    cout<<(tgt<=k?max(tgt,0):-1)<<endl;
    return 0;
}
