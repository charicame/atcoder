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
    lint n,a,b;cin>>n>>a>>b;
    lint ab=a+b;

    lint cnt=n/ab;cnt*=a;
    lint ycnt=n%ab;
    if(ycnt>a)cnt+=a;
    else cnt+=ycnt;

    cout<<cnt<<endl;
    return 0;
}