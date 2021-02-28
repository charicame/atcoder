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

int g2(string s){
    sort(s.begin(),s.end());
    return stoi(s);
}

int g1(string s){
    sort(s.rbegin(),s.rend());
    return stoi(s);
}

int main(){
    string n;int k;cin>>n>>k;
    int ans=0;
    rep(i,k){
        n=to_string(g1(n)-g2(n));
    }
    cout<<n<<endl;
    return 0;
}