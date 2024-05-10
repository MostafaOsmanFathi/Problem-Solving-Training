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

void solve(){
///==================================================
    int n,m;cin>>n>>m;
    int ans{n*n};
    set<int>x,y;
    int tx{0},ty{0};
    for (int i = 0; i < m; ++i) {
        int a,b;cin>>a>>b;
        bool xx=x.count(a),yy=y.count(b);
        if (!xx and !yy){
            ans-=(n*2-1)-tx-ty;
            ++tx,++ty;
        }else if (!xx and yy){
            ans-=(n)-ty;
            ++tx;
        }else if (xx and !yy){
            ans-=(n)-tx;
            ++ty;
        }
        x.insert(a),y.insert(b);
        cout<<ans<<" "<<flush;
    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}