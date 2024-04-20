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
bool cmp( const pair<int,int>&a,const  pair<int,int>&b){
    return a.second>b.second;
}
void solve(){
///==================================================
    int n,m;cin>>n>>m;
    pair<int,int>pa[m];
    for (int i = 0; i < m; ++i) {
        cin>>pa[i].first;
        cin>>pa[i].second;
    }
    sort(pa,pa+m,cmp);
    int ans{0};
    for (int i = 0; i < m; ++i) {
        int tmp= min(n,pa[i].first);
        ans+=tmp*pa[i].second;
        n-=tmp;
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}