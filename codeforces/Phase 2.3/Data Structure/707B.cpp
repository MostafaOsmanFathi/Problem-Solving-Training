#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(a,b) (((a)/gcd(a,b))*(b))
#define inf 0x3f3f3f3f3f3f3f3fLL
#define mSet(arr,value) memset((arr),(value),(sizeof (arr)))
//#define int long long
using namespace std;
const int N=1e5+1000;
map<int,int>adj[N];
void solve(){
///==================================================
    int n,m,k;cin>>n>>m>>k;
    while (m--){
        int a,b,c;cin>>a>>b>>c;
        if(adj[a].count(b))
            adj[a][b]= min(adj[a][b],c);
        else
            adj[a][b]= c;

        if(adj[b].count(a))
            adj[b][a]= min(adj[b][a],c);
        else
            adj[b][a]= c;
    }
    set<int>source;
    while (k--){
        int x;cin>>x;
        source.insert(x);
    }
    int ans{INT_MAX};
    for (const auto& x:source) {
        for (const auto& xx:adj[x]) {
            if (not source.count(xx.first))
                ans= min(ans,xx.second);
        }
    }
    if (ans==INT_MAX)ans=-1;
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()
//    tloop
    solve();

    return 0;
}