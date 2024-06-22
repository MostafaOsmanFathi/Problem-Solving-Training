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
    ld n,a;cin>>n>>a;
    ld mn{INT_MAX},ans{0};
    for (int i = n,j=3; j<=n; --i,++j) {
        ld tmp=((j-2)*180)/n;
//        cout<<j<<" [] "<<i<<":"<<tmp<<endl<<flush;
        ld res= abs(tmp-a);
        if (res<mn)
            mn=res,ans=i;
    }
    cout<<"1 2 "<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()
    cout<<setprecision(1000);
//    tloop
    solve();

    return 0;
}