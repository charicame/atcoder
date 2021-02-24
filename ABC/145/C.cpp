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

//階乗の計算
int facctorialMethod(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

double leng(int xi,int xj,int yi,int yj){
    return sqrt(pow(xi-xj,2)+pow(yi-yj,2));
}

int main(){
    int n;cin>>n;
    int x[n],y[n];rep(i,n)cin>>x[i]>>y[i];
    int kai=facctorialMethod(n);

    //順列の作成
    vector<int> nkai(n);
    iota(nkai.begin(),nkai.end(),0);
    double sum=0;
    do{
        rep(i,n-1){
            sum+=leng(x[nkai[i+1]],x[nkai[i]],y[nkai[i+1]],y[nkai[i]]);
        }
    }while(next_permutation(nkai.begin(),nkai.end()));
    double ans=sum/kai;
    cout<<fixed<<setprecision(8)<<ans<<endl;
    return 0;
}