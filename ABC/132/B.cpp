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
    vector<int> p(n);
    rep(i,n)cin>>p[i];
    int cnt=0;
    rep(i,n-2){
        if(p[i]<p[i+1]&&p[i+1]<p[i+2])cnt++;
        if(p[i]>p[i+1]&&p[i+1]>p[i+2])cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}