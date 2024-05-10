#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define inf 0x3f3f3f3f3f3f3f3fLL
#define int long long
using namespace std;

void solve(){
///==================================================
    int n,m;cin>>n>>m;
    int cnt[n][n];
    char arr[n][n];
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>arr[i][j];
        }
    }
    int x=1,y=1,mx=0;

    memset(cnt,0,sizeof cnt);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j]!='#'){

                bool tmp{true};
                for (int k = j; k < j+m and j+m<=n; ++k) {
                    if (arr[i][k]=='#'){
                        tmp= false;
                        break;
                    }
                }
                if (tmp)
                    for (int k = j; k < j+m and j+m<=n; ++k) {
                        ++cnt[i][k];
                        if (cnt[i][k]>mx)
                            mx=cnt[i][k],x=i+1,y=k+1;
                    }

                tmp= true;
                for (int k = i; k < i+m and i+m<=n; ++k) {
                    if (arr[k][j]=='#'){
                        tmp= false;
                        break;
                    }
                }

                if (tmp)
                    for (int k = i; k < i+m and i+m<=n; ++k) {
                       ++cnt[k][j];
                        if (cnt[k][j]>mx)
                            mx=cnt[k][j],x=k+1,y=j+1;
                    }

            }
        }
    }
    cout<<x<<" "<<y<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}