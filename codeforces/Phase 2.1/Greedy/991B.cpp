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
    int arr[n],sum{0};
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int ans{0};
    for (int i = 0; i < n; ++i) {
        if (round(sum/(ld)n)==5){
            cout<<ans<<endl;
            return;
        }else{
            sum+=5-arr[i];
            ++ans;
        }
    }
    cout<<ans<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}