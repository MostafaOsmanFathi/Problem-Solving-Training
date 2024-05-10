#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define inf 0x3f3f3f3f3f3f3f3fLL
#define mSet(arr,value) memset((arr),(value),(sizeof (arr)))
#define int long long
using namespace std;

void solve(){
///==================================================
    int n,k;cin>>n>>k;
    bool arr[n+1];
    mSet(arr,0);
    while (k--){
        int t;cin>>t;
        if (t==1) {
            int a, b;
            cin>>a>>b;
            arr[a]=arr[b]= true;
        }else{
            cin>>t;
            arr[t]=true;
        }
    }
    arr[n]= true;
    int mn{0},mx{0};
    for (int i = 1; i <n ; ++i) {
        if (not arr[i] and not arr[i+1]){
            ++++mx;
            ++mn;
            ++i;
        }else if (not arr[i])
            ++mx,++mn;
    }
    cout<<mn<<" "<<mx<<endl;


///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}