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
    int arr[n+1];
    pair<int,int> winner[n+1];
    mSet(arr,0);
    mSet(winner,0);
    int mx{INT_MIN},lp=n*(n-1)/2;
    for (int i = 1; i < lp; ++i) {
        int a,b;cin>>a>>b;
        ++arr[a];
        ++arr[b];
        winner[a].second=a;
        ++winner[a].first;
        mx= max(winner[a].first,mx);
    }
    vector<int>vc;
    for (int i = n; i >0 ; --i) {
        if (arr[i]!=n-1)vc.push_back(i);
    }
    sort(winner,winner+n+1,greater<pair<int,int>>());
    int x{0},y{0};
    for (int i = 0; i <n ; ++i) {
        if (winner[i].second==vc.front())
            x=winner[i].first;

        if (winner[i].second==vc.back())
            y=winner[i].first;
    }
    if (y>x)swap(vc.front(),vc.back());
    for (const auto &x:vc) {
        cout<<x<<" ";
    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}