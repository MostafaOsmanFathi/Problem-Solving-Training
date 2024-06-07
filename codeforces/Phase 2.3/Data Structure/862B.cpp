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
#define int long long
using namespace std;
const int N=1e5+100;
vector<int>adj[N];

int dfs(int v,int parent,bool odd){

    int res{odd};
    for (const auto& x:adj[v]) {
        if (x==parent)continue;
        res+=dfs(x,v,!odd);
    }
    return res;
}
void solve(){
///==================================================
    int n;cin>>n;
    set<int>st1,st2;
    for (int i = 0; i <n-1 ; ++i){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int tmp= dfs(1,-1,true);
    cout<<((tmp*(n-tmp))-n)+1;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}