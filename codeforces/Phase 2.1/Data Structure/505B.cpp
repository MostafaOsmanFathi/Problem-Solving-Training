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
int dsu[200][N];


int find_set(int v,int parent[N]) {
    if (v == parent[v])
        return v;
    return parent[v]=find_set(parent[v],parent);
}

void union_sets(int a, int b,int parent[N]) {
    a = find_set(a,parent);
    b = find_set(b,parent);
    if (a != b)
        parent[b] = a;
}

void solve(){
///==================================================
    int n,m;cin>>n>>m;
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j < n; ++j) {
            dsu[i][j]=j;
        }
    }
    for (int i = 0; i <m; ++i) {
        int a,b,c;cin>>a>>b>>c;
        union_sets(min(a,b), max(a,b),dsu[c]);
    }
    int q;cin>>q;
    while (q--){
        int a,b;cin>>a>>b;
        int ans{0};
        for (int i = 1; i <= m; ++i) {
            ans+=(find_set(a,dsu[i])==find_set(b,dsu[i]));
        }
        cout<<ans<<endl;
    }


///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}