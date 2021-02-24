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
    int n,d;cin>>n>>d;
    int cnt=0;
    while(n>0){
        cnt++;
        n-=2*d+1;
    }
    cout<<cnt<<endl;
    return 0;
}