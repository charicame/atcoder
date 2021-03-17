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
    int x=0,y=0,t=0;
    bool ok=true;
    rep(i,n){
        int nt,nx,ny;cin>>nt>>nx>>ny;
        int ttmp=nt,xtmp=nx,ytmp=ny;
        nt=abs(nt-t);t=ttmp;
        nx=abs(nx-x);x=xtmp;
        ny=abs(ny-y);y=ytmp;
        if(nt==nx+ny)continue;
        else if((nt-(nx+ny))%2==0&&(nt-(nx+ny))>=0)continue;
        else{
            ok=false;
            //printf("%d %d %d\n",nt,nx,ny);
        }
    }
    cout<<(ok?"Yes":"No")<<endl;
    return 0;
}