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
    int g[15][15];//証言を宣言
    rep(i,n)rep(j,n)g[i][j]=-1;//証言の初期化(何も証言していない=-1)
    rep(i,n){
        int an;cin>>an;
        rep(j,an){
            int x,y;
            cin>>x>>y;
            --x;
            g[i][x]=y;//人iの証言、人xはyである。をcin
        }
    }

    int ans=0;
    rep(i,1<<n){
        vector<int> d(n);

        //iの時に何番の人が1になっていて、正直者なのか確認
        rep(j,n)if(i>>j&1){
            d[j]=1;
        }

        bool ok=true;
        rep(j,n) if(d[j]){ //証言人jを1からn番目まで回し、正直者の場合次に進
            rep(k,n){
                if(g[j][k]==-1) continue;//人jのkに対する証言がなければcontinue
                if(g[j][k]!=d[k]) ok=false;
                //正しいはず証言人jのkに対する証言とkが違う場合はfalseになる。
            }
        }
        if(ok)ans=max(ans,__builtin_popcount(i));
    }
    cout<<ans<<endl;
    return 0;
}