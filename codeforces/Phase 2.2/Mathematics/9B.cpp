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
#define int ld
using namespace std;
int Dist(int x,int y,int x2,int y2)
{
return (sqrtl(((x2-x)*(x2-x))+((y2-y)*(y2-y))));
}
void solve(){
///==================================================
    ll n;
    ld v1,v2;cin>>n>>v1>>v2;
    int arr[n];
    for (ll i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    int dx,dy;cin>>dx>>dy;
    int ans=INT_MAX;
    int poss{0},con{1},Distance{0};
    for (auto& x:arr) {
        if (con!=1) {
            int tmp = (Dist(dx, dy, x, 0) / (ld) v2) + (x / (ld) v1);
            if (ans >= tmp)
                Distance=Dist(dx, dy, x, 0),ans = tmp, poss = con;
        }
        ++con;
    }
    cout<<poss<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

    solve();

    return 0;
}