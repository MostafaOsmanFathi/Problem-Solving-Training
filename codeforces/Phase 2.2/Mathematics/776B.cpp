#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"1":"2")<<" ";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define inf 0x3f3f3f3f3f3f3f3fLL
#define mSet(arr,value) memset((arr),(value),(sizeof (arr)))
#define int long long
using namespace std;
bool isPrime(int n){
    if (n==2)return true;
    else if (n%2==0)return false;
    for (int i = 3; i*i <=n ; ++++i) {
        if (n%i==0)
            return false;
    }
    return true;
}

void solve(){
///==================================================
    int n;cin>>n;
    if (n>=3)
        cout<<2<<endl;
    else cout<<1<<endl;
    for (int i = 2; i <=n+1 ; ++i) {
        outCondtion(isPrime(i))
    }
///==================================================
}
signed main() {MOSTAFAOSMAN()
//    sieve();
//    tloop
    solve();

    return 0;
}