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
const int N=5e6;
int arr[N]{0};

void solve(){
///==================================================
    int n,m;cin>>n>>m;

    for (int i = 0; i <n ; ++i) {
        int tmp;cin>>tmp;
        --arr[tmp];
    }
    for (int i = 0; i <m ; ++i) {
        int tmp;cin>>tmp;
        ++arr[tmp];
    }
    for (int i = N-2; i >=0 ; --i) {
        if (arr[i+1]>0){
            arr[i]+=arr[i+1];
        }
    }
    int ans{0};
    for (int i = 0; i < N; ++i) {
        if (arr[i]<0){
            ans+= abs(arr[i]);
        }
    }
    cout<<ans<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}