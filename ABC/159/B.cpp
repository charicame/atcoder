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

bool kaikai(string s){
    int n=s.size()/2;
    int j=s.size();
    for(int i=0;i<n;i++){
        j--;
        //cout<<s[i]<<s[j]<<endl;
        if(s[i]!=s[j])return false;
    }
    return true;
}

int main(){
    string s;cin>>s;
    int n=s.size();
    bool ans=true;
    if(!kaikai(s)){ans=false;}
    //cout<<1<<ans<<endl;
    if(!kaikai(s.substr(0,((n-1)/2)))){ans=false;}
    //cout<<2<<ans<<endl;
    if(!kaikai(s.substr(((n+3)/2)-1,n))){ans=false;}
    //cout<<3<<ans<<endl;

    if(ans)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}