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
    set<int>st[n+1];
    for (int i = 0; i < m; ++i) {
        int a,b;cin>>a>>b;
        st[a].insert(b);
        st[b].insert(a);
    }
    int tmp=n,ans{0};
    bool qetraa{true};
    queue<pair<int,int>>Remove;
    while (tmp and qetraa){
        qetraa=false;
        for (int i = 1; i <=n ; ++i) {
            if (st[i].size()==1) {
                Remove.push({i, *st[i].begin()});
                --tmp;
                qetraa= true;
            }
        }
        if (qetraa)
            ++ans;
        while (!Remove.empty()) {
            st[Remove.front().first].erase(Remove.front().second);
            st[Remove.front().second].erase(Remove.front().first);
            Remove.pop();
        }
    }
    cout<<ans<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}