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
    int n,k;cin>>n>>k;
    int arr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    --k;
    int ans{arr[k]!=0};
    for (int i = k-1,j=k+1; i >=0 or j< n; --i,++j) {
        if (i>=0 and j<n)
            ans+=arr[i] and arr[j],ans+=arr[i] and arr[j];
        else if (i>=0)
            ans+=arr[i];
        else
            ans+=arr[j];
    }
    cout<<ans<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}