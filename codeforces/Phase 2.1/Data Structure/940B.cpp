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
    int n,k,a,b;cin>>n>>k>>a>>b;
    int ans{0};
    if (k==1){
        cout<<((n-1)*a)<<endl;
        return;
    }
    while (n!=1){
        if (n%k==0){
            int tmp=(n/k);
            int CostA=(n-tmp)*a;
            if (CostA>b){
                ans+=b;
                n/=k;
            }else
                ans+=CostA,n/=k;
        }else{
            if (n>k) {
                ans += (n%k)*a;
                n -= (n%k);
            }else {
                ans+=(n-1)*a;
                n=1;
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