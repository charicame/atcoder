#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector
#include<numeric> //iota
#include<map> //map
#include<set> //set
#include<sstream> //stringstream(hex 16,dec 10,oct 8,bilset 2)
#include<list> //list 
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    string s;cin>>s;
    bool ok=true;
    int cnt=0;
    rep(i,s.size()){
        if(s[i]=='0')ok=false;
        if(s[i]=='+'){if(ok)cnt++;ok=true;}
    }
    if(ok)cnt++;
    cout<<cnt<<endl;
    return 0;
}