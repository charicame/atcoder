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
    int mx=0,sum=0;
    string an;
    rep(i,n){
        string s;
        int p;
        cin>>s>>p;
        if(mx<p){
            an=s;mx=p;
        }
        sum+=p;
    }
    if(mx*2>sum)cout<<an<<endl;
    else cout<<"atcoder"<<endl;
    return 0;
}