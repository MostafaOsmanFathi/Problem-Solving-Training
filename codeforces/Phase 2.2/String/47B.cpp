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
vector<int>adj[100];
bool vis[100];
string ans;
bool isDAG(int v,int parent){
    if (vis[v])return false;
    vis[v]= true;
    for (auto x:adj[v]) {
        if (parent==x)continue;
        if(!isDAG(x,v))return false;
    }
    vis[v]= false;
    return true;
}


void dfs(int v,int parent){
    vis[v]= true;
    for (auto x:adj[v]) {
        if (parent==x or vis[x])continue;
        dfs(x,v);
    }
    ans.push_back(v+'A');
}
void solve(){
///==================================================
    int t=3;
    while (t--){
        char a,b,c;cin>>a>>b>>c;
        if (b=='>')
            adj[a-'A'].push_back(c-'A');
        else
            adj[c-'A'].push_back(a-'A');
    }
    bool res{true};
    for (int i = 0; i <3 ; ++i) {
        if (!vis[i]) {
            res&=isDAG(i, -1);
        }
    }
    for (int i = 0; i <3 ; ++i) {
        if (!vis[i]) {
            dfs(i,-1);
        }
    }
    if (res){
        cout<<ans<<endl;
    }else
        cout<<"Impossible";
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}