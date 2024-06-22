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
    int mnX{INT_MAX},mnY{INT_MAX},mxX{INT_MIN},mxY{INT_MIN};
    char arr[n][m];
    int cnt{0};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <m; ++j) {
            cin>>arr[i][j];
            if (arr[i][j]=='B') {
                ++cnt;
                mnX = min(mnX, i);
                mnY = min(mnY, j);
                mxX = max(mxX, i);
                mxY = max(mxY, j);
            }
        }
    }
    if (cnt==0 or cnt==1){
        cout<<(cnt+1)%2<<endl;
        return;
    }
    int l= max(mxX-mnX+1,mxY-mnY+1);

    if (l>n or l>m){
        cout<<-1<<endl;
        return;
    }
    cout<<l*l-cnt<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}