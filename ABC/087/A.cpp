#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
#include<map> //map
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int x,a,b;cin>>x>>a>>b;
    x-=a;
    int cnt=0;
    while(x>=b){
        x-=b;cnt++;
    }
    cout<<x<<endl;
    return 0;
}