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
    int n; cin >> n;
    vector<int> p(n),q(n),x(n);
    rep(i,n) cin>>p[i];
    rep(i,n) cin>>q[i];

    //順列の作成
    iota(x.begin(),x.end(),1);

    int a=0,b=0,cnt=0;

    do{
        if(x == p) a=cnt;
        if(x == q) b=cnt;
        cnt++;
    }while(next_permutation(x.begin(),x.end()));

    int c=(a-b);
    cout << fabs(c) << endl;
    return 0;
}
