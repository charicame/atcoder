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
    int n;cin>>n;
    vector<int> a(n),b(n);
    rep(i,n)cin>>a[i];
    b=a;
    sort(b.begin(),b.end());
    int cnt=0;
    rep(i,n){
        if(a[i]!=b[i])cnt++;
    }
    cout<<(cnt==2||cnt==0?"YES":"NO")<<endl;
    return 0;
}