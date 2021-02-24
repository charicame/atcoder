#include<iostream>
#include<string>
#include<algorithm> //max,min
#include<iomanip> //setprecision,tuple
#include<vector>  //vector

using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n;cin>>n;
    vector<tuple<string,int ,int>> a;
    rep(i,n){
        string s;int p;cin>>s>>p;p=-p;
        a.push_back(tie(s,p,i));
    }
    sort(a.begin(),a.end());
    rep(i,n)cout<< get<2>(a[i])+1 <<endl;
    return 0;
}
