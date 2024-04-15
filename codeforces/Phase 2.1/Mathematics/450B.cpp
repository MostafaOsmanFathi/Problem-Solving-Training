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
const int mod=1e9+7;
int x,y;
int rec(int n){
    if (n==1)return x;
    else if (n==2)return y;
    return rec(n-1) - rec(n-2);
}

void solve(){
///==================================================
    cin>>x>>y;
    int n;cin>>n;
    int arr[6];
    for (int i = 1; i <=6 ; ++i) {
//        cout<<i<<" : "<<(rec(i))<<endl;
        arr[i-1]=(((rec(i))%mod)+mod)%mod;
    }
    --n;
    cout<<arr[n%6];
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}