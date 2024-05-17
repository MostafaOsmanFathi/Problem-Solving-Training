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
    int ans{0};
    for (int i = 1; i <n ; ++i) {
        for (int j = 1; j < m; ++j) {
            if (i+1<=n and i-1>=0 and j+1<=m and j-1>=0){
//                int tmp= min({i, j, n - i, m - j});
                int tmp= min(i,n-i)* min(j,m-j);
//                cout<<i<<" "<<j<<" "<<tmp<<endl;
                ans+=tmp;
            }
        }
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}