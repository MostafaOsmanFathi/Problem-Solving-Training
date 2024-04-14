#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops,O3")
#pragma GCC target("avx2,tune=native")
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define int long long
using namespace std;
const int N=2e5+100;
void solve(){
///==================================================
    int n,k,q;cin>>n>>k>>q;
    int partialSum[N]{0};

    while (n--){
        int l,r;cin>>l>>r;
        ++partialSum[l];
        --partialSum[r+1];
    }
    partial_sum(partialSum,partialSum+N,partialSum);
    for (int i = 0; i < N; ++i) {
        partialSum[i]=partialSum[i]>=k;
    }
    partial_sum(partialSum,partialSum+N,partialSum);
    while (q--){
        int a,b;cin>>a>>b;
        cout<<partialSum[b]-partialSum[a-1]<<endl;

    }
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}