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
    pair<int,int>pa[n];
    for (int i = 0; i < n; ++i) {
        cin>>pa[i].first;
        cin>>pa[i].second;
        if (pa[i].first>pa[i].second)swap(pa[i].first,pa[i].second);

    }
    int ans{INT_MAX};
    for (int i = 0; i <=1000 ; ++i) {
        bool fl{true};
        for (auto& [a,b]:pa) {
            if (not (i>=a and i<=b)){
                fl=false;
                break;
            }
        }
        if (fl) {
            ans = min(ans, abs(m - i));
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