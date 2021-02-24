#include<iostream>
//#include<string>
//#include<cmath>
//#include<iomanip>
using namespace std;
using lint = long long;
//#define PI acos(-1)
//#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
    lint n; cin >> n;
    lint ans=n;
    for(lint a=1;a*a<=n;a++)if(n%a==0){
        ans=min(ans,a+n/a-2);
    }

    cout << ans << endl;
    return 0;
}