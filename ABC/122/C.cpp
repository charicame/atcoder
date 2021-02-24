#include<iostream>
#include<string>
#include<algorithm> //max,min
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int answer(string sub){
    int cnt=0;
    for(int i=0;i<sub.size();i++){
        if(sub[i]=='A'&&sub[i+1]=='C'){
            cnt++;i++;
        }
    }
    return cnt;
}

int main(){
    int n,q;cin>>n>>q;
    string s;cin>>s;
    int l,r;

    int ans;
    for(int i=0;i<q;i++){
        cin>>l>>r;
        string sub=s.substr(l-1,r-1);
        ans = answer(sub);
        cout<<ans<<endl;
    }
    return 0;
}