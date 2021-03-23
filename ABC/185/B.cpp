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
    lint N,M,T;cin>>N>>M>>T;
    lint tmp=0,nn=N;
    rep(i,M){
        int A,B;cin>>A>>B;
        N-=(A-tmp);
        if(N<=0){
            cout<<"No"<<endl;
            return 0;
        }
        N=min(N+(B-A),nn);
        tmp=B;
    }
    N-=(T-tmp);
    if(N<=0){
        cout<<"No"<<endl;
    }else cout<<"Yes"<<endl;
    return 0;
}
