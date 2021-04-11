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

bool iskaibun(string s){
    string t=s;
    reverse(t.begin(),t.end());
    return s==t;
}

int main(){
    string s;cin>>s;
    bool ans=false;
    rep(i,10){
        if(iskaibun(s))ans=true;
        s='0'+s;
        //cout<<s<<endl;
    }
    cout<<(ans?"Yes":"No")<<endl;
    return 0;
}