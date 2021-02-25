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
    int h,a;cin>>h>>a;
    int cnt=0;
    while(h>0){
        h-=a;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
