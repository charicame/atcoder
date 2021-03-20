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
    lint n;cin>>n;
    lint cnt=0;
    for(int i=1;i<=1000000;i++){
        string s=to_string(i)+to_string(i);
        lint tmp=stoll(s);
        if(tmp<=n){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}