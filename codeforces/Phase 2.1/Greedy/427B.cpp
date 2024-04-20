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
    int n,c,t;cin>>n>>t>>c;
    vector<int>vc;
    int x{0};
    for (int i = 0; i < n; ++i) {
        int tmp;cin>>tmp;
        if (tmp<=t){
            ++x;
        }else {
            if (x>=c)
                vc.push_back(x);
            x = 0;
        }
    }
    if (x>=c)
        vc.push_back(x);
    int ans{0};
    for (auto &val:vc) {
        ans+=val-c+1;
    }
    cout<<ans;
///==================================================
}
signed main() {MOSTAFAOSMAN()
//    tloop
    solve();

    return 0;
}