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
    int n;cin>>n;
    if (n==4||n==7){
        cout<<1+(n&1)<<endl;
        return;
    }
    int x=log10(n);
    int tmp{0};
    for (int i = 1; i <=x ; ++i) {
        tmp+=(1<<i);
    }
    int ans{0};
    for (int i = 0; n; ++i,n/=10) {
        if (n%10==7){
            ans|=(1<<i);
        }
    }
    cout<<tmp+ans+1<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}