#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define inf 0x3f3f3f3f3f3f3f3fLL
#define mSet(arr,value) memset((arr),(value),(sizeof (arr)))
#define int long long
using namespace std;

void solve(){
///==================================================
    int n,k;cin>>n>>k;
    int arr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ld ans=max(((arr[0]-0)),((k-arr[n-1])));
    for (int i = 1; i <n ; ++i) {
        ans= max((ld)(arr[i]-arr[i-1])/2,ans);
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()
    cout<<fixed<<setprecision(9);
//    tloop
    solve();

    return 0;
}