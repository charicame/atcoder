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

int main(){
    string s;cin>>s;
    int cnt1=0,cnt2=0;
    rep(i,s.size()){
        if(i%2==0&&s[i]=='0')cnt1++;
        else if(i%2!=0&&s[i]=='1')cnt1++;
        if(i%2==0&&s[i]=='1')cnt2++;
        else if(i%2!=0&&s[i]=='0')cnt2++;
    }
    cout<<min(cnt1,cnt2)<<endl;
    return 0;
}