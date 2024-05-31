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
    int n,k;cin>>n>>k;
    int frq[k+1];
    mSet(frq,0);
    for (int i = 0; i < n; ++i) {
        int tmp;cin>>tmp;
        ++frq[tmp];
    }
    int ans{0};
    while (frq[k]!=n){
        ++ans;
        for (int i = 1; i < k; ++i) {
            if (frq[i]) {
                --frq[i];
                ++frq[i+1];
                if (frq[i+1]==1)++i;
            }
        }

    }
    cout<<ans;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}