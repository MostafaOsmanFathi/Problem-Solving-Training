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
    int ans{1};
    for (int i = 0; i < n; ++i) {
        int tmp;cin>>tmp;
        for (int j = 2; j*j <=tmp ; ++j) {
            if (tmp%j==0){
                while (tmp%j==0){
                    tmp/=j;
                }
                ++mp[j];
            }
        }
        if (tmp!=1)
            ++mp[tmp];
    }
    for (const auto& x:mp) {
        ans= max(ans,x.second);
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}