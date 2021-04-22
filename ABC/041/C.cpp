#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
#include<map> //map
#include<set> //set
#include<sstream> //stringstream(hex 16,dec 10,oct 8,bilset 2)
#include<list> //list 
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n;cin>>n;
    vector<pair<lint,lint>> p;
    rep(i,n){
        lint tmp;cin>>tmp;
        p.push_back(make_pair(tmp,i));
    }
    sort(p.rbegin(),p.rend());
    rep(i,n){
        cout<<p[i].second+(lint)1<<endl;
    }
    return 0;
}