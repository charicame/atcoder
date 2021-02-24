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
    int n;cin>>n;
    int a[n];int ma=0;
    rep(i,n){
        cin>>a[i];
        ma =max(ma,a[i]);
    }

    int tmp=0,ans=0,an;

    for(int i=2;i<=ma;i++){
        tmp=0;
        rep(j,n){
            if(a[j]%i==0)tmp++;
        }
        if(ans<tmp){
            ans=tmp;
            an=i;
        }
    }

    cout<<an<<endl;
    return 0;
}