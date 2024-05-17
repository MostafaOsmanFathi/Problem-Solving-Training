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
int nC2(int n){
    return n*(n-1)/2;
}
void solve(){
///==================================================
    int n,m;cin>>n>>m;

    int tmp=(n/m);
    int ans= nC2(tmp+1)*(n%m);
    ans+= nC2(tmp)*(m-n%m);
    cout<<ans<<" "<<nC2(n-m+1)<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}