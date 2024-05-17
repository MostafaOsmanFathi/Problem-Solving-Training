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
    int arr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    int m;cin>>m;
    int arr2[m];
    for (int i = 0; i <m ; ++i) {
        cin>>arr2[i];
    }
    sort(arr,arr+n);
    sort(arr2,arr2+m);
    int ans{0};
    for (int i = 0,i2=0; i < n or i2<m; ) {
        if (abs(arr[i]-arr2[i2])<2){
            ++ans;
            ++i,++i2;
        }else if ( arr[i]<arr2[i2]){
            ++i;
        }else
            ++i2;
        if (i==n or i2==m)break;
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}