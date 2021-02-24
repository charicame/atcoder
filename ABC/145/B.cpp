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
    int n;string s;cin>>n>>s;
    if(s.substr(0,n/2)==s.substr(n/2,n/2)) cout <<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}