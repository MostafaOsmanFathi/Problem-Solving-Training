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
    int a,b,c;cin>>a>>b>>c;
    if (c==0 and a%b==0){
        cout<<1<<endl;
        return;
    }
    a%=b;
    int poss{0};
    while (a and poss<1e5){
        ++poss;
        a*=10;
        int tmp= a/b;
        if (tmp==c) {
            cout<<poss<<endl;
            return;
        }
        a-=(tmp*b);
    }
    if (c==0 and a==0)
        cout<<poss+1<<endl;
    else
        cout<<-1<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}