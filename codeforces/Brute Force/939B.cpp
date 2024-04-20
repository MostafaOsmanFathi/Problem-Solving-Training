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
    int n,k;cin>>n>>k;
    int ans{0},tAns{1},mx{0};
    bool isThereAns{false};
    for (int i = 0; i < k; ++i) {
        int tmp;cin>>tmp;
        int res=(n/tmp)*tmp;
        if (res>mx) {
            mx=res;
            ans=i;
            tAns=tmp;
            isThereAns=true;
        }
    }
    cout<<ans+1<<" "<<((isThereAns)?n/tAns:0)<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}