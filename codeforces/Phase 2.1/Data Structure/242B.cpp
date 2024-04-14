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
    pair<int,int>arr[n];
    pair<int,int>mxDiff;
    int a{INT_MAX},b{INT_MIN};

    for (int i = 0; i <n ; ++i) {
        cin>>arr[i].first;
        cin>>arr[i].second;
        a= min(a,arr[i].first);
        b= max(b,arr[i].second);
    }
    int ans{0};
    for (int i = 0; i < n; ++i) {
        if (arr[i].first<=a&&arr[i].second>=b) {
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}