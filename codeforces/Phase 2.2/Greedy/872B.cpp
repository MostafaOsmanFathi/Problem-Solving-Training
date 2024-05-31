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
    int n,k;cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    if (k==1)
        cout<<*min_element(arr,arr+n)<<endl;
    else if (k>=3)
        cout<<*max_element(arr,arr+n)<<endl;
    else{
      cout<<max(arr[0],arr[n-1])<<endl;

    }
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}