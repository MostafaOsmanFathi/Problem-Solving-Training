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
    int arr[n];
    int len{2},ans{0};
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        if (i>1){
            if (arr[i]==arr[i-1]+arr[i-2])
                ++len;
            else
                len=2;
            ans= max(len,ans);
        }
    }
    cout<<max(ans, min(n,2LL))<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}