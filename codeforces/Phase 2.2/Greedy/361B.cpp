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
    int n,m;cin>>n>>m;
    if (n==m){
        cout<<-1<<endl;
        return;
    }
    if ((n-m+1)&1){
        cout<<n<<" ";
        for (int i = 2; i <=m+1 ; ++i) {
            cout<<i<<" ";
        }
        for (int i = m+3; i <n ; ++++i) {
            cout<<i<<" "<<i-1<<" ";
        }
        cout<<1<<endl;
    }else{
        for (int i = 1; i <=m+1 ; ++i) {
            cout<<i<<" "<<flush;
        }
        for (int i = m+2; i <=n ; ++++i) {
            cout<<i+1<<" "<<i<<" ";
        }
    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}