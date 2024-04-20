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
    int r,d;cin>>r>>d;
    d=r-d;
    int q;cin>>q;
    int ans{0};
    while (q--){
        int x,y,rr;cin>>x>>y>>rr;
        x= abs(x),y= abs(y);
        ld t3= sqrt((x*x)+(y*y));
        ld t4=t3+rr;
        ld t5=t3-rr;
        if (t5>=d and t4<=r) {
            ++ans;
        }

    }

    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}