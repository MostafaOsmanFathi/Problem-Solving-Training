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
    string s;cin>>s;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    bool vis[n];
    memset(vis,false,sizeof vis);
    for (int i = 0; i <n && i>=0; ) {
        if (vis[i]){
            cout<<"INFINITE\n";
            return;
        }
        vis[i]= true;
        if (s.at(i)=='>')
            i+=arr[i];
        else
            i-=arr[i];
        cout<<"";
    }
    cout<<"FINITE\n";

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}