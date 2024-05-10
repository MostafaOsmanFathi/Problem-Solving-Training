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
    int n,q;cin>>n>>q;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    int inc{0};
    while (q--){
        int op,c;cin>>op>>c;
        --c;
        if (op==1){
            int tmp;cin>>tmp;
            arr[c]=tmp-inc;
        }else if (op==2){
            inc+=c+1;
        }else if (op==3){
            cout<<arr[c]+inc<<endl;
        }
    }


///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}