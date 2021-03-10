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

const int mod=2019;

int main(){
    lint l,r;cin>>l>>r;
    r=min(r,l+2019);
    lint mn=3000000000;
    for(lint i=l;i<=r;i++){
        for(lint j=i+1;j<=r;j++){
            mn=min(mn,i*j%mod);
        }
    }
    cout<<mn<<endl;
    return 0;
}