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
    int a,b,w;cin>>a>>b>>w;

    int ma,mi;
    w*=1000;
    ma=(w+(b-1))/b;
    mi=w/a;

    if(ma>mi)cout<<"UNSATISFIABLE"<<endl;
    else cout<<ma<<" "<<mi<<endl;
    return 0;
}