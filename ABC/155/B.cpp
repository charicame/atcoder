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
    int n;cin>>n;
    rep(i,n){
        int a;cin>>a;
        if(a%2==0){
            if(a%3==0||a%5==0)continue;
            else{
                cout<<"DENIED"<<endl;return 0;
            }
        }
    }
    cout<<"APPROVED"<<endl;
    return 0;
}