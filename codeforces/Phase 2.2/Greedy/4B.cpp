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
    int n,sum;cin>>n>>sum;
    int mn[n],mx[n];
    int mnR{0},mxR{0};
    for (int i = 0; i <n ; ++i) {
        cin>>mn[i]>>mx[i];
        mnR+=mn[i];
        mxR+=mx[i];
    }

    if (sum>mxR or sum<mnR){
        outCondtion(false);
        return;
    }
    outCondtion(true);
    int req{sum-mnR};
    for (int i = 0; i < n; ++i) {
        int tmp=mx[i]-mn[i];
        if (req>=tmp) {
            req -= tmp;
            cout<<mx[i]<<" ";
        }else{
            cout<<mn[i]+req<<" ";
            req=0;
        }
    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}