#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int h,n;cin>>h>>n;
    int sum=0;
    rep(i,n){
        int an;cin>>an;
        sum+=an;
    }
    if(sum>=h)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
