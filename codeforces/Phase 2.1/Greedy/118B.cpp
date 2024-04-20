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

    for (int i = 0; i <= n; ++i) {
        cout<<string((2*n)-(2*i),' ');
        for (int j = 0; j <= i; ++j) {
            cout<<j;
            if (i!=0)cout<<" ";

        }
        for (int j = i-1; j >=0; --j) {
            cout<<j;
            if (j!=0)cout<<" ";
        }
        cout<<endl;
    }
    for (int i = n-1; i >=0;--i) {
        cout<<string((2*n)-(2*i),' ');
        for (int j = 0; j <= i; ++j) {
            cout<<j;
            if (i!=0)cout<<" ";
        }
        for (int j = i-1; j >=0; --j) {
            cout<<j<<flush;
            if (j!=0)cout<<" ";

        }
        cout<<endl;
    }



///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}