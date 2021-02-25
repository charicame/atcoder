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
    lint h;cin>>h;
    lint mcnt=1,cnt=1;
    while(1){
        if(h==0||h==1){
            break;
        }else{
            h/=2;mcnt*=2;
            cnt+=mcnt;
        }
    }
    cout<<cnt<<endl;
    return 0;
}