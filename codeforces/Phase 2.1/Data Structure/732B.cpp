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
    int n,k;cin>>n>>k;
    int ans{0};
    int arr[n];
    cin>>arr[0];
    for (int i = 1; i <n ; ++i) {
        cin>>arr[i];
        if (arr[i]+arr[i-1]<k) {
            int req = k-(arr[i]+arr[i-1]);
            ans+=req;
            arr[i]+=req;
        }
    }
    cout<<ans<<endl;
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}