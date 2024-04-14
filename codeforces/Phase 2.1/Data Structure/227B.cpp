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
    int n;cin>>n;
    int a{0},b{0};
    pair<int,int> arr[n+1];
    for (int i = 0; i <n ; ++i) {
        int tmp;cin>>tmp;
        arr[tmp].first+=i+1;
        arr[tmp].second+=n-i;
    }
    int q;cin>>q;
    while(q--){
        int qq;cin>>qq;
        a+=arr[qq].first;
        b+=arr[qq].second;
    }
    cout<<a<<" "<<b<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}