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
    int arr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; ++i) {
        if (arr[i]<0 and m){
            arr[i]*=-1,--m;
        }
    }
    if (m){
        if (m&1){
            *min_element(arr,arr+n)*=-1;
        }
    }
    cout<<accumulate(arr,arr+n,0)<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}