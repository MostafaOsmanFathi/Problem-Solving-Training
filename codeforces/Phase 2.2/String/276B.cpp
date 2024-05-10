#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"First":"Second")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define inf 0x3f3f3f3f3f3f3f3fLL
#define int long long
using namespace std;

void solve(){
///==================================================
    string s;cin>>s;
    map<char,int>mp;
    for (auto& x:s) {
        ++mp[x];
    }
    bool tmp= true;
    int cnt{0};
    for (auto& x:mp) {
        if (x.second&1)
            if (not tmp){
                ++cnt;
            }else
                tmp=false;
    }
    outCondtion(cnt%2==0)
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}