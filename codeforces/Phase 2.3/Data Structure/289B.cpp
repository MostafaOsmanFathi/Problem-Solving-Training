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
    int n,m,d;cin>>n>>m>>d;
    n*=m;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum{0};
    for (int i = 1; i < n; ++i) {
        if ((arr[i]-arr[i-1])%d!=0){
            cout<<-1<<endl;
            return;
        }
        sum+=arr[i];
    }
    int target= arr[((n+1)/2)-1];
    int ans{0};
    for (int i = 0; i <n ; ++i) {
        ans+= abs(target-arr[i])/d;
    }
    target= arr[((n+1)/2)];
    int ans2{0};
    for (int i = 0; i <n ; ++i) {
        ans2+= abs(target-arr[i])/d;
    }
    cout<<min(ans,ans2)<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}