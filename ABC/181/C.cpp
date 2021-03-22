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
    int n;cin>>n;
    vector<pair<int,int>> p;
    rep(i,n){
        int x,y;cin>>x>>y;
        p.push_back(make_pair(x,y));
    }

    bool ans=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int a1=p[i].first,a2=p[i].second;
                int b1=p[j].first,b2=p[j].second;
                int c1=p[k].first,c2=p[k].second;
                double A,B;
                A=(b2-a2)*(c1-a1);
                B=(c2-a2)*(b1-a1);
                if(A==B)ans=true;
            }
        }
    }
    cout<<(ans?"Yes":"No")<<endl;
    return 0;
}