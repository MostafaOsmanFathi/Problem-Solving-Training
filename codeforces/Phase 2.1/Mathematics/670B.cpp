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
    ll n,k;cin>>n>>k;
    ll arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    int l=0,r=1e6;
    while (r-l>1){
        int mid=(r+l)/2;
        if (mid*(mid+1)/2<k)
            l=mid;
        else
            r=mid;
    }
    int tmp=l*(l+1)/2;
    cout<<arr[k-1-tmp]<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}