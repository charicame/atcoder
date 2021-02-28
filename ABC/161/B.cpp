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
    int n,m;cin>>n>>m;
    double sum=0;
    vector<double> an(n);
    rep(i,n){
        cin>>an[i];sum+=an[i];
    }
    sort(an.rbegin(),an.rend());

    bool ans=true;
    //double iif=sum/(4*m);
    rep(i,m){
        if(an[i]*4*m<sum) ans=false;
    }
    if(ans)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}