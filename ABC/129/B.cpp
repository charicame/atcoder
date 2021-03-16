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
    int n;cin>>n;
    vector<int> w(n);
    int sum=0;
    rep(i,n){
        cin>>w[i];
        sum+=w[i];
    }

    int mn=INF;
    rep(i,n){
        int s1=0,s2=0;
        rep(j,i+1){
            s1+=w[j];
        }
        s2=sum-s1;
        mn=min(mn,abs(s1-s2));
    }
    cout<<mn<<endl;
    return 0;
}