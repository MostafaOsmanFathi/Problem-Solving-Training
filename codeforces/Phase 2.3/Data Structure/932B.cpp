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
const int N=1e6+100;
int prefix[10][N];
int f(int x){
    int tmp{1};
    while (x) {
        if (x % 10)
            tmp *= x % 10;
        x/=10;
    }
    return tmp;
}
int g(int x){
    if (x<10)return x;
    return g(f(x));
}

void solve(){
///==================================================
    int l,r,k;cin>>l>>r>>k;
    cout<<prefix[k][r]-prefix[k][l-1]<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()
    for (int i = 0; i < N; ++i) {
        ++prefix[g(i)][i];
    }
    for (int i = 0; i <10 ; ++i) {
        partial_sum(prefix[i],prefix[i]+N,prefix[i]);
    }
    tloop
        solve();


    return 0;
}