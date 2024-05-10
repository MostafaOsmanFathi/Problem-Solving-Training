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
    map<char,int>mp;
    for (int i = 0; i < n; ++i) {
        char c;cin>>c;
        ++mp[c];
    }
    int ans{0};
    while (m){
        int res=0,decBy{0},ChPoss{0};
        for (int i = 0; i < 26; ++i) {
            char ch='A'+i;
            int& sec=mp[ch];
            int tmp= min(sec,m);
            if (res<tmp*tmp)
                ChPoss=i,decBy=tmp,res= max(tmp*tmp,res);

        }
        ans+=res;
        m-=decBy;
        mp[ChPoss+'A']-=decBy;
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}