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

int ctoi(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return 0;
}

int main(){
    string n;cin>>n;
    lint sum=0;
    rep(i,n.size()){
        //sum+=ctoi(n[i]);
        sum+=(n[i]-'0');
    }
    if(sum%9==0)puts("Yes");
    else puts("No");
    return 0;
}
