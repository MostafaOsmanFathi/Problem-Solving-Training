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
const int N=1e3;
int leader[N];
int getLeader(int u){
    if (leader[u]==u)return u;
    return leader[u]= getLeader(leader[u]);
}
void connect(int u,int v){
    if (getLeader(u)== getLeader(v))return;
    u= getLeader(u);
    v= getLeader(v);
    leader[u]=v;
}
void solve(){
///==================================================
    int n,m;cin>>n>>m;
    for (int i = 0; i <=n ; ++i) {
        leader[i]=i;
    }
    for (int i = 0; i < m; ++i) {
        int u,v;cin>>u>>v;
        connect(u,v);
    }
    map<int,int>mp;
    for (int i = 1; i <=n ; ++i) {
        ++mp[getLeader(i)];
    }
    int ans{1};
    for (auto& x:mp) {
        ans*=(1LL<<x.second);
    }

    cout<<(ans>>mp.size())<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}