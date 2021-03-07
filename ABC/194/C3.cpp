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

const int maxa=200;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    vector<int> d(maxa*2+1);
    lint ans=0;
    rep(i,n){
        for(int aj=-maxa;aj<=maxa;aj++){
            lint c=d[maxa+aj];
            lint x=a[i]-aj;
            ans+=(lint)x*x*c;
        }
        d[maxa+a[i]]++;
    }
    cout<<ans<<endl;
    return 0;
}