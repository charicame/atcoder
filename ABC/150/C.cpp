#include<iostream>
#include<string>
#include<cmath>   
#include<iomanip> //setprecision
#include<vector>  //vector
#include<numeric> //iota
#include<algorithm> //next_permutation
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n; cin >>n;
    vector<int> p(n),q(n),x(n);
    rep(i,n)cin >> p[i]; 
    rep(i,n)cin >> q[i];

    //iotaで最初の順列の作成
    iota(x.begin(),x.end(),1);

    int cnt=0,a,b;
    do{
        if(x==p) a=cnt;
        if(x==q) b=cnt;
        cnt++;
    }while(next_permutation(x.begin(),x.end()));
    cout << fabs(a-b) << endl;
    return 0;
}