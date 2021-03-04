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

bool iskaibun(string s){
    string t=s;
    reverse(t.begin(),t.end());
    return s==t;
}

int main(){
    string s;cin>>s;
    bool ans=true;
    if(!iskaibun(s))ans=false;
    if(!iskaibun(s.substr(0,s.size()/2)))ans=false;
    cout<<(ans?"Yes":"No")<<endl;
    return 0;
}