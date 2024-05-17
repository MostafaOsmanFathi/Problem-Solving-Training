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
    int n,m;cin>>n>>m;
    vector<int>vc;
    int prev{0};
    for (int i = 0; i <n ; ++i) {
        int a,b;cin>>a>>b;
        prev+=(a*b);
        vc.push_back(prev);
    }
    while (m--){
        int tmp;cin>>tmp;
        int poss= lower_bound(vc.begin(), vc.end(),tmp)-vc.begin();
        cout<<poss+1<<endl;
    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}