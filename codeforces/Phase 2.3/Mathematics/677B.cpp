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
    int n,h,k;cin>>n>>h>>k;
    int ans{0};
    int cur;cin>>cur;
    ans+=cur/k;
    cur%=k;

    for (int i = 1; i <n ; ++i) {
        int tmp;cin>>tmp;
        if (tmp+cur<=h){
            cur+=tmp;
            ans+=cur/k;
            cur%=k;
        }else{
            ++ans;
            cur=tmp;
            ans+=cur/k;
            cur%=k;
        }
    }
    if (cur)++ans;
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}