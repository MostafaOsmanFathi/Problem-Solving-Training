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
    int k2,k3,k5,k6;cin>>k2>>k3>>k5>>k6;
    int tmp1= min({k2, k5, k6});
    k2-=tmp1;
    k5-=tmp1;
    k6-=tmp1;
    int tmp2= min(k3,k2);
    cout<<(tmp1*256)+(tmp2*32)<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}