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
    int a,b,c,d;cin>>a>>b>>c>>d;

    while(1){
        c-=b;
        if(c<=0){
            cout<<"Yes"<<endl;
            return 0;
        }
        a-=d;
        if(a<=0){
            cout<<"No"<<endl;
            return 0;
        }
    }
    return 0;
}
