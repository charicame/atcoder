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
    string ans;
    rep(i,s.size()){
        int as=ans.size();
        if(s[i]=='B'&&as>0) ans.erase(as-1,1);
        else if(s[i]!='B')ans+=s[i];
    }
    cout<<ans<<endl;
    return 0;
}