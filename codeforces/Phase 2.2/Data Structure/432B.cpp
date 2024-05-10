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
    int a[n],b[n];
    unordered_map<int,int>mp1,mp2;
    for (int i = 0; i < n; ++i) {
        cin>>a[i]>>b[i];
        ++mp1[a[i]];
        ++mp2[b[i]];
    }
    for (int i = 0; i < n; ++i) {
        int tmp=n-1;
        tmp+=mp1[b[i]];
        cout<<tmp<<" "<<(2*(n-1))-tmp<<endl;
    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}