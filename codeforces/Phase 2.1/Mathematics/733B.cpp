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
    int l{0},r{0};
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i].first;
        cin>>arr[i].second;
        l+=arr[i].first;
        r+=arr[i].second;
    }
    int res=abs(r-l),poss{-1};

    for (int i = 0; i < n; ++i) {
        int tmpl=l-arr[i].first+arr[i].second;
        int tmpr=r-arr[i].second+arr[i].first;
        if (abs(tmpl-tmpr)>res){
            res= max(res, abs(tmpl-tmpr));
            poss=i;
        }
    }
    cout<<poss+1<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}