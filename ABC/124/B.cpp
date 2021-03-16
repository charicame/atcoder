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
    vector<int> h(n);
    rep(i,n)cin>>h[i];
    int mx=h[0];
    int cnt=0;
    rep(i,n){
        if(mx<=h[i]){
            cnt++;
            mx=h[i];
        }
    }
    cout<<cnt<<endl;
    return 0;
}