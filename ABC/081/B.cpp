#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
#include<map> //map
#include<set> //set
#include<sstream> //stringstream(hex 16,dec 10,oct 8,bilset 2)
#include<list> //list 
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n;cin>>n;
    lint mn=INF;
    rep(i,n){
        lint a;cin>>a;
        lint tmp=0;
        while(a%2==0){
            a/=2;tmp++;
        }
        mn=min(tmp,mn);
    }
    cout<<mn<<endl;
    return 0;
}