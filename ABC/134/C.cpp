#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<utility>
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n;cin>>n;
    vector<pair<int,int>> an;
    rep(i,n){
        int a;cin>>a;
        an.push_back(make_pair(a,(i+1)));
    }

    sort(an.rbegin(),an.rend());

    for(int i=1;i<=n;i++){
        if(get<1>(an[0])!=i)cout<<get<0>(an[0])<<endl;
        else cout<<get<0>(an[1])<<endl;
    }
    return 0;
}