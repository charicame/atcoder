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
    string s;cin>>s;
    int cnt=0;
    rep(i,s.size())if(s[i]=='R')cnt=1;
    rep(i,s.size()){
        if(s[i]=='R'&&s[i+1]=='R')cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
