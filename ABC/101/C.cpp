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
    int n,k;cin>>n>>k;
    int a[n];
    int mn=INF;
    rep(i,n){
        cin>>a[i];
        mn=min(mn,a[i]);
    }
    int mncnt=0;
    rep(i,n)if(a[i]==mn)mncnt++;
    cout<<(n-mncnt+k-2)/(k-1)<<endl;
    return 0;
}
