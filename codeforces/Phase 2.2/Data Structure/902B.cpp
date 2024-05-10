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
const int N=1e5;
vector<int>adj[N];
int NodeColors[N];
int dfs(int v,int parent,int prevColor){
    int res=NodeColors[v]!=prevColor;
    for (const auto& x:adj[v]) {
        if (x==parent)continue;
        res+=dfs(x,v,NodeColors[v]);
    }
    return res;
}

void solve(){
///==================================================
    int n;cin>>n;
    for (int i = 2; i <=n ; ++i) {
        int tmp;cin>>tmp;
        adj[tmp].push_back(i);
        adj[i].push_back(tmp);
    }
    for (int i = 1; i <=n ; ++i) {
        int tmp;cin>>tmp;
        NodeColors[i]=tmp;
    }
    cout<<dfs(1,-1,-1)<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}