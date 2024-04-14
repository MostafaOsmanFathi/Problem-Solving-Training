#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define int long long
using namespace std;
const int dx[]={+0,+0,+1,-1,-1,+1,-1,+1};
const int dy[]={-1,+1,+0,+0,+1,+1,-1,-1};

void solve(){
///==================================================
    int n;cin>>n;
    char arr[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>arr[i][j];
        }
    }
    for (int i = 1; i < n; ++i) {
        for (int j =0; j <n ; ++j) {
            if (arr[i][j]=='#') {
                bool tmp=true;
                for (int k = 0; k < 4; ++k) {
                    int nx=i+dx[k];
                    int ny=j+dy[k];
                    if (nx>=0 and nx<n and ny>=0 and ny<n and arr[nx][ny]=='#'){
                        continue;
                    }else {
                        tmp = false;
                        break;
                    }
                }
                if (tmp){
                    arr[i][j]='.';
                    for (int k = 0; k < 4; ++k) {
                        int nx=i+dx[k];
                        int ny=j+dy[k];
                        arr[nx][ny]='.';
                    }
                }
            }

        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j]=='#'){
                outCondtion(false);
                return;
            }
        }
    }
    outCondtion(true);

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}