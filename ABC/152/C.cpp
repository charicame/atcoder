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
    int cnt=1;
    int mn;cin>>mn;
    rep(i,n-1){
        int tmp;cin>>tmp;
        if(mn>tmp){
            cnt++;mn=tmp;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
