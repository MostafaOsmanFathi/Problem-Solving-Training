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

void solve(){
///==================================================
    int n;cin>>n;
    map<int,int>mp;
    string s;cin>>s;
    string tmp;cin>>tmp;
    mp[INT_MAX];
    mp[INT_MIN];
    for (const auto& x:tmp) {
        ++mp[x];
    }
    int ans{0};
    for (const auto& x:s) {
        auto it=mp.lower_bound(x);
        if (it->first==INT_MAX)--it;
        else if (it->first==INT_MIN)++it;

        if (it->first<x) {
            ++ans;
            it=++mp.begin();
        }
        --it->second;
        if (!it->second)
            mp.erase(it);
    }
    cout<<ans<<endl;
    for (const auto& x:tmp) {
        ++mp[x];
    }
    ans=0;
    for (const auto& x:s) {
        auto it=mp.upper_bound(x);
        if (it->first==INT_MAX)--it;
        else if (it->first==INT_MIN)++it;
        if (it->first>x)++ans;
        else{
            it=++mp.begin();
        }
        --it->second;
        if (!it->second)
            mp.erase(it);
    }
    cout<<ans;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}