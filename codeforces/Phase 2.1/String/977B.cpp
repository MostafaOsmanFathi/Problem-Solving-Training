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
    map<string ,int>mp;
    for (int i = 0; i < n-1; ++i) {
        ++mp[s.at(i)+string("")+s.at(i+1)];
//        ++mp[s.at(i+1)+string("")+s.at(i)];
    }
    int tmp{0};
    string ans;
    for (const auto& x:mp) {
        if (x.second>tmp)
            tmp=x.second,ans=x.first;
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}