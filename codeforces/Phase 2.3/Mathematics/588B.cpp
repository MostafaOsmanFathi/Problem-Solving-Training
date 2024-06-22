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
bool test(int n){
    for (int i = 2; i*i <=n ; ++i) {
        if ((n%(i*i))==0)
            return false;
    }
    return true;
}
void solve(){
///==================================================
    int n;cin>>n;
    int ans{0};
    for (int i = 1; i*i <=n ; ++i) {
        if (n%i==0){
            if (test(i))
                ans= max(ans,i);

            if (test(n/i))
                ans= max(ans,n/i);
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