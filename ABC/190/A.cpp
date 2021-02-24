#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    while(a!=0 && b!=0){
        if(c==0){
            a--;
            if(a==0) break;
            b--;
        }
        if(c==1){
            b--;
            if(b==0) break;
            a--; 
    }

    if(a==0 && b==0 && c==0) cout << "Aoki" << endl; 
    else if(a==0 && b==0 && c==1) cout << "Takahashi" << endl;
    else if(b==0) cout << "Takahashi" << endl;
    else if(a==0)  cout << "Aoki" << endl;
}