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
    int a,b;cin>>a>>b;

    int a1,b1;cin>>a1>>b1;
    int a2,b2;cin>>a2>>b2;
    if (a>=a1 and b>=b1){
        int x=a,y=b-b1;
        if (x>=a2 and y>=b2){
            outCondtion(true)
            return;
        }else if (y>=a2 and x>=b2){
            outCondtion(true)
            return;
        }

        x=a-a1,y=b;

        if (x>=a2 and y>=b2){
            outCondtion(true)
            return;
        }else if (y>=a2 and x>=b2){
            outCondtion(true)
            return;
        }

    }
    swap(a,b);

    if (a>=a1 and b>=b1){
        int x=a,y=b-b1;
        if (x>=a2 and y>=b2){
            outCondtion(true)
            return;
        }else if (y>=a2 and x>=b2){
            outCondtion(true)
            return;
        }

        x=a-a1,y=b;

        if (x>=a2 and y>=b2){
            outCondtion(true)
            return;
        }else if (y>=a2 and x>=b2){
            outCondtion(true)
            return;
        }

    }
    outCondtion(false)
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}