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
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    lint n;cin>>n;
    map<string,int> mp;
    set<string> st;
    rep(i,n){
        string s;cin>>s;
        if(s[0]=='!')st.insert(s.erase(0,1));
        else mp[s]++;
    }

    bool ans=false;
    for(auto x:st){
        if(mp[x]>0){
            cout<<x<<endl;
            return 0;
        }
    }
    cout<<"satisfiable"<<endl;
    return 0;
}