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
int getLastBitPosstion(int n) {
    int position{0};
    while (n) {
        position++,n>>=1;
    }
    return position;
}
void solve(){
///==================================================
    int n,k;cin>>n>>k;
    int tmp=getLastBitPosstion(n)-1;
    int ans=(1LL<<tmp);
    if (--k)
        ans^=ans-1;
    cout<<max(ans,n)<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()
    cout<<setprecision(100)<<fixed;
//    tloop
    solve();

    return 0;
}