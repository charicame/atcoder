#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;cin>>s;
    int cnt=0;
    if(s.size()==1){
        cout<<0<<endl;return 0;
    }
    int i=0;
    while(i<=s.size()){
        if((s[i]=='1'&&s[i+1]=='0')||(s[i]=='0'&&s[i+1]=='1')){
            s.erase(i,2);
            cnt+=2;i=0;continue;
        }
        i++;
    }
    cout<<cnt<<endl;
    return 0;
}