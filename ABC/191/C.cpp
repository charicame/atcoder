#include<iostream>
#include<string>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    char s[h][w]={};

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> s[i][j];
        }
    }

    int cnt=0;
    for(int i=1;i<h-1;i++){
        for(int j=1;j<w-1;j++){
            int dcnt=0;
            //if(s[i][j]=='.') continue;
            int k=i-1;
            int m=j-i;
            for(k;k<i+1;k++){
                for(m;m<j+1;m++){
                    if(s[k][m]=='.') dcnt++;
                }
            }
            if(dcnt>=5) cnt++;
        }
    }
    cout << cnt << endl;
}