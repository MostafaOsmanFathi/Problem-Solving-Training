#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"Yes":"No")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(a,b) (((a)/gcd(a,b))*(b))
#define inf 0x3f3f3f3f3f3f3f3fLL
#define mSet(arr,value) memset((arr),(value),(sizeof (arr)))
#define int long long
using namespace std;

void solve(){
///==================================================
    int n,q;cin>>n>>q;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    while (q--){
        int a,b,x;cin>>a>>b>>x;
        --a;
        int cnt{0};
        for (int i = a; i <b ; ++i) {
            if (arr[i]<arr[x-1])
                ++cnt;
        }
        outCondtion(cnt+a+1==x)
    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}