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
    int n,m;cin>>n>>m;
    int arr[n];
    int arr2[m];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    for (int i = 0; i < m; ++i) {
        cin>>arr2[i];
    }
    int ans{0};
    int sum{0},sum2{0};
    for (int i = 0,j{0}; i <n&&j<m ;) {
        if (sum==sum2){
            sum=arr[i++];
            sum2=arr2[j++];
            ++ans;
        }else if (sum>sum2){
            sum2+=arr2[j++];
        }else{
            sum+=arr[i++];
        }
    }
    cout<<ans<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}