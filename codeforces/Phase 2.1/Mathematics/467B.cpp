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
    int n,m,k;cin>>n>>m>>k;
    int arr[m];
    for (int i = 0; i <m ; ++i) {
        cin>>arr[i];
    }
    int ans{0},cmp;cin>>cmp;
    for (int i = 0; i <m ; ++i) {

        int res=bitset<25>(arr[i]^cmp).count();
        if (res<=k) {
            ++ans;
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