#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define inf 0x3f3f3f3f3f3f3f3fLL
#define mSet(arr,value) memset((arr),(value),(sizeof (arr)))
#define lcm(a,b) (((a)/gcd(a,b))*(b))
#define int long long
using namespace std;

void solve(){
///==================================================
    int n;cin>>n;
    int tmp=((n+1)*4)-4;
    cout<<lcm(n+1,tmp)/(n+1)+1<<endl<<flush;
    return;
    int x{0};
    int ans{1};
    while ((x+n+1)%tmp!=0){
        x+=n+1;
        ++ans;
    }
    x+=n+1;
    ++ans;
    cout<<ans+1<<" "<<x<<endl<<flush;
///==================================================
}
signed main() {MOSTAFAOSMAN()

    tloop
        solve();

    return 0;
}