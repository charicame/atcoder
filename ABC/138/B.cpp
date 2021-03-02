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
    vector<double> a(n);rep(i,n)cin>>a[i];
    double sum=0;
    rep(i,n){
        sum+=(1/a[i]);
    }
    sum=(1/sum);
    printf("%.6f\n",sum);
    return 0;
}
