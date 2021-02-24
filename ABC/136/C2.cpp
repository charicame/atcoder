#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n;cin>>n;
    long double h[n+1];
    rep(i,n) cin>>h[i];
    h[n+1]=0;
    string ans="Yes";
    for(int i=n;i>1;i--){
        if((h[i-1]-h[i])>=2){
            ans="No";break;
        }
        else if((h[i-1]-h[i])>=1){
            h[i-1]--;
        }
    }
    if((h[0]-h[1])>=2)ans="No";
    if(n==1)ans=="Yes";
    cout << ans <<endl;
    return 0;
}