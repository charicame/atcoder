#include<iostream>
#include<string>
using namespace std;

int main(){
    float v,t,s,d;
    cin >> v >> t >> s >> d;

    float time;
    time = d/v;

    if( time<t || s<time) cout << "Yes" << endl;
    else cout << "No" << endl;
}