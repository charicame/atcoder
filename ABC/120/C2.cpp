#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    string s;cin>>s;
    int c0=0,c1=0;
    for(int i=0;i<=s.size();i++){
        if(s[i]=='0') c0++;
        else if(s[i]=='1') c1++;
    }
    cout << 2*min(c0,c1) << endl;
    return 0;
}