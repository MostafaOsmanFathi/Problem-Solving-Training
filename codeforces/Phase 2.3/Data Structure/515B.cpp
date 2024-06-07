#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"Yes":"No")<<"\n";
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
    bool arr1[n],arr2[m];
    mSet(arr1,false);
    mSet(arr2,false);
    int xx;cin>>xx;
    while (xx--){
        int tmp;cin>>tmp;
        arr1[tmp]=true;
    }
    cin>>xx;
    while (xx--){
        int tmp;cin>>tmp;
        arr2[tmp]=true;
    }
    for (int i = 0; i < 10000; ++i) {
        arr1[i%n]|=arr2[i%m];
        arr2[i%m]|=arr1[i%n];
    }
    for (int i = 0; i <n ; ++i) {
        if (!arr1[i]){
            outCondtion(false);
            return;
        }
    }
    for (int i = 0; i <m ; ++i) {
        if (!arr2[i]){
            outCondtion(false);
            return;
        }
    }
    outCondtion(true)
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}