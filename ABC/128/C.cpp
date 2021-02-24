#include<iostream>
#include<string>
#include<cmath>
#include<algorithm> //max,min
#include<iomanip> //setprecision
#include<vector>  //vector
#include<numeric> //iota
using namespace std;
using lint = long long;
#define INF 2147483647
#define PI acos(-1)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    int n,m;cin>>n>>m;
    vector<int> a(n);
    rep(i,m){
        int k;cin>>k;
        rep(j,k){
            //n個のうちk個のスイッチがm番目の電球と接続している。
            //s番目のスイッチと接続しているところを1と0で表す。
            int s;cin>>s;s--;//sは0スタートにするため-1
            a[s] |= 1<<i;//or
        }
    }

    //pは目的の状態を表いしている
    int p=0;
    rep(i,m){
        int x;cin>>x;
        //pのビットを取得
        p |= x<<i;
    }

    int ans=0;
    //スイッチの押し方を全部試す。
    for(int s=0;s<(1<<n);s++){ //1<<nで全通りためせる。
        //tの初期化
        int t=0;

        //sのパターンの時の出力tを作る。
        for(int i=0;i<n;i++){
            if(s>>i&1){ //iビットが1か判定する。
                //xorをとる。
                t ^= a[i];
            }
        }
        if(t==p) ans++;
    }

    cout<<ans<<endl;
    return 0;
}
