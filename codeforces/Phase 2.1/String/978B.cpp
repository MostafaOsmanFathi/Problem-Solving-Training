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
    int n;cin>>n;
    string s;cin>>s;

    int ans{0};
    int cnt{s.front()=='x'};
    for (int i = 1; i < s.size(); ++i) {
        if ( s.at(i)=='x')
            ++cnt;
        else {
            ans += (cnt <= 2 ? 0 : (cnt - 2)),cnt=0;
        }
    }
    if (cnt)
        ans+=(cnt<=2?0:(cnt-2)),cnt=0;

    cout<<ans<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}