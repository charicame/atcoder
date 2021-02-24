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
    int k=s.size();
    int cnt=0;
    int i=0,j=k-1;//0スタートなので、k-1にする。
    while(i<=k/2&&j>=k/2){
        if(s[i]!=s[j]){
            cnt++;
        }
        i++;j--;
    }
    cout<<cnt<<endl;
    return 0;
}