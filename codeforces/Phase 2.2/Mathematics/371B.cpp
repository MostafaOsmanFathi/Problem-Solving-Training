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
//#define int long long
using namespace std;
const int Divs[]{5,3,2};
void solve(){
///==================================================
    int x,y;cin>>x>>y;
    int gc=gcd(x,y);
    x/=gc,y/=gc;
    int ans{0};
    for (int i = 0; i <3 ; ++i) {
        while (x%Divs[i]==0)
            x/=Divs[i],++ans;
        while (y%Divs[i]==0)
            y/=Divs[i],++ans;
    }
    if (x!=1 or y!=1)
        ans=-1;
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}