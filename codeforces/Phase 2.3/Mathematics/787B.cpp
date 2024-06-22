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
    int n,m;cin>>n>>m;
    while (m--){
        int k;cin>>k;
        map<int,int>mp;
        bool fl{false};
        for (int i = 0; i < k; ++i) {
            int tmp;cin>>tmp;
            ++mp[tmp];
            if (mp[-tmp]){
                fl= true;
            }
        }
        if (!fl){
            outCondtion(true);
            return;
        }
    }
    outCondtion(false);
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}