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
    int n;cin>>n;
    bool ans=true;
    char tmp;
    map<string,int> mp;
    rep(i,n){
        string s;cin>>s;
        if(i==0){
            tmp=s[s.size()-1];
            mp[s]++;
            continue;
        }else {
            if(tmp!=s[0])ans=false;
            tmp=s[s.size()-1];
        }
        if(mp[s]!=0)ans=false;
        else mp[s]++;
    }
    cout<<(ans?"Yes":"No")<<endl;
    return 0;
}