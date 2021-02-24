#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n,q;cin>>n>>q;
    string s;cin>>s;

    int cnt[n]={};int tmp=0;
    rep(i,n){
        if(s[i-1]=='A'&&s[i]=='C') tmp++;
        cnt[i]=tmp;
    }

    rep(i,q){
        int l,r;cin>>l>>r;
        cout<<cnt[r-1]-cnt[l-1]<<endl;
    }
    return 0;
}