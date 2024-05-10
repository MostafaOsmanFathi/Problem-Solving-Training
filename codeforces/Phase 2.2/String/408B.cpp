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
    string s1,s2;cin>>s1>>s2;
    map<char,int>mp;
    for (auto& x:s1) {++mp[x];}
    int ans{0};
    for (auto& x:s2) {
        if (!mp.count(x)){
            cout<<-1<<endl;
            return;
        }
        int&tmp=mp[x];
        if (tmp)
            ++ans,--tmp;

    }
    if (!ans)ans=-1;
    cout<<ans<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}