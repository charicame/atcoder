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

int main(){
    string s;cin>>s;
    for(int i=0;i<=s.size();i++){ 
        if(i%2==0){
            if(isupper(s[i])){
                cout<<"No"<<endl;
                return 0;
            }
        }else{
            if(islower(s[i])){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}