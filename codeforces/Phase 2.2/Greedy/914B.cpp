#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"Conan":"Agasa")<<"\n";
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
    for (int i = 0; i < n; ++i) {
        int tmp;cin>>tmp;
        ++mp[tmp];
    }

    int cnt=(--mp.end())->second;
    if (cnt&1 or cnt==n) {
        outCondtion(cnt&1)
        return;
    }
    for (auto x:mp) {
        if (x.second&1){
            outCondtion(true)
            return;
        }
    }
    outCondtion(false)

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}