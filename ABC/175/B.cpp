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
    int n,cnt=0;cin>>n;
    vector<lint> l(n);rep(i,n)cin>>l[i];
    sort(l.begin(),l.end());
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            if(l[i]==l[j])continue;
            for(int k=j+1;k<n;k++){
                if(l[i]==l[k]||l[j]==l[k])continue;
                if(l[i]+l[j]>l[k])cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
