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
    lint n,k,q;cin>>n>>k>>q;
    vector<int> a(n);
    rep(i,q){
        lint tmp;cin>>tmp;tmp--;
        a[tmp]++;
    }
    rep(i,n)a[i]-=(q-k);

    rep(i,n)puts(a[i]>0?"Yes":"No");
    return 0;
}