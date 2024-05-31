#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define int long long
using namespace std;

void solve(){
    int n;cin>>n;
    int prefix[n];
    for (int i = 0; i < n; ++i) {
        int tmp;cin>>tmp;
        if (i)
            prefix[i]=prefix[i-1]+tmp;
        else
            prefix[i]=tmp;
    }
    int q;cin>>q;
    while (q--) {
        int x;cin>>x;
        int res = lower_bound(prefix,prefix+n,x)-prefix;
        if (res!=n)
            ++res;
        cout<<res<<"\n";
    }
}
signed main() {MOSTAFAOSMAN()
//    tloop
        solve();

    return 0;
}