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
    int a,b,k;cin>>a>>b>>k;
    int cnt=0;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            k--;
            if(k==0){
                cout << i<< endl;
                return 0;
            }
        }
    }
    return 0;
}