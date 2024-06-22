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
    int n,k,l,r,sa,sk;cin>>n>>k>>l>>r>>sa>>sk;
    vector<int>ans(n);

    for (int i = 0; i <k ; ++i) {
        ans.at(i)=sk/k;
    }
    int rem=sk%k;
    for (int i = 0; i <rem ; ++i) {
        ++ans.at(i);
    }

    sa-=sk;
    for (int i = k; i <n ; ++i) {
        ans.at(i)=l;
        sa-=l;
    }
    for (int i = k; i <n and sa ; ++i) {
        int tmp=min({r - ans.at(i), sa,ans.at(k-1)-ans.at(i)});
        ans.at(i)+=tmp;
        sa-=tmp;
    }
//    sort(ans.begin(), ans.end(),greater<int>());
    for (const auto& x:ans) {
        cout<<x<<" ";
    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}