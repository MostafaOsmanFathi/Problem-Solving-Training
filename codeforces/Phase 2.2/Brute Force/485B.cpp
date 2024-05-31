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

void solve(){
///==================================================
    int n;cin>>n;
    pair<int,int> arr[n];
    for (int i = 0; i < n; ++i) {
         cin>>arr[i].first;
         cin>>arr[i].second;
    }
    int ans{INT_MIN};
    for (int i = 0; i <n ; ++i) {
        for (int j = i+1; j < n; ++j) {
            ans= max(ans,max(abs(arr[i].first-arr[j].first),abs(arr[i].second-arr[j].second)));
        }
    }
    cout<<ans*ans<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}