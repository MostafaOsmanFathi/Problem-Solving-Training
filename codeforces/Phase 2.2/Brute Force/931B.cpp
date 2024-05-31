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
bool inRange(int l,int r,int x){
    return l<=x and r>x;
}
void solve(){
///==================================================
    int n,a,b;cin>>n>>a>>b;
    int twos{2},ans{1};
    while (twos<n) {
        for (int i = 1; i <= n; i += twos) {
            if (inRange(i, i + twos, a) and inRange(i, i + twos, b)) {
                cout << ans << endl;
                return;
            }
        }
        ++ans,twos<<=1;
    }
    if (twos==n){
        cout<<"Final!";
    }else
        cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}