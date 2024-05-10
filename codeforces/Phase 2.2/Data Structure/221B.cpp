#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
//#define int long long
using namespace std;
bool Digits[10];
bool finDigits(int n){

    while (n){
        if (Digits[n%10])return true;
        n/=10;
    }
    return false;
}
void solve(){
///==================================================
    int x;cin>>x;
    int ans{0};
    int xx=x;
    while (xx)
        Digits[xx%10]=true,xx/=10;

    for (int i = 1; i*i <=x ; ++i) {
        if (x%i==0){
            ans+=finDigits(i);
            if (x/i!=i)
                ans+=finDigits(x/i);
        }
    }

    cout<<ans;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}