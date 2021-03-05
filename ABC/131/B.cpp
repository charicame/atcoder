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
    int n,l;cin>>n>>l;
    int aj[n]={};
    rep(i,n)aj[i]=l+i;
    
    int mn=INF,sum=0,tmp;
    rep(i,n){
        if(mn>=abs(aj[i])){
            mn=abs(aj[i]);tmp=aj[i];
        }
        sum+=aj[i];
    }
    cout<<sum-tmp<<endl;
    return 0;
}