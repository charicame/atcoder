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
    int tmp=2025-n;
    vector<pair<int,int>> p;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(tmp==i*j)p.push_back(make_pair(i,j));
        }
    }
    rep(x,p.size()){
        printf("%d x %d\n",p[x].first,p[x].second);
    }
    return 0;
}