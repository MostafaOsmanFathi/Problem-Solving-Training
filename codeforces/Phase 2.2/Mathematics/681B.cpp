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
    int n;cin>>n;
    int x=0;
    for (int i = 0; i < 100; ++i) {
        if (x>n)break;
        int y=0;
        for (int j = 0; j <1000 ; ++j) {
            if ((x+y)>n)break;

            if ((n-(x+y))%1234==0){
                outCondtion(true);
                return;
            }

            y+=123456;
        }
        x+=1234567;
    }
    outCondtion(false);
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}