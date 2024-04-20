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
    int arr[m];
    for (int i = 0; i < m; ++i) {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    for (int i = 0; i <m ; ++i) {
        if (arr[i]==1 or arr[i]==n or (i<m-2 and arr[i]==arr[i+1]-1 and arr[i+1]==arr[i+2]-1)){
            outCondtion(false);
            return;
        }
    }
    outCondtion(true)
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}