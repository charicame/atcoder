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
    int a,b,c,d;cin>>a>>b>>c>>d;
    if(a+b>c+d)cout<<"Left"<<endl;
    else if(a+b<c+d)cout<<"Right"<<endl;
    else cout<<"Balanced"<<endl;
    return 0;
}