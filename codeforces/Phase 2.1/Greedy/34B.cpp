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
    int n,m;cin>>n>>m;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        arr[i]*=-1;
    }
    sort(arr,arr+n,greater<int>());
    int ans{0};
    for (int i = 0; i < n; ++i) {
        if (arr[i]<0||!m)break;
        ans+=arr[i];
        --m;
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}