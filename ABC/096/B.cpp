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
    vector<int> a(3);
    rep(i,3)cin>>a[i];

    int k;cin>>k;
    rep(i,k){
        sort(a.begin(),a.end());
        a[2]*=2;
    }
    cout<<a[0]+a[1]+a[2]<<endl;
    return 0;
}