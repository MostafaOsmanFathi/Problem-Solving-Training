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
    string s;cin>>s;
    if (s.size()&1){
        cout<<-1<<endl;
        return;
    }
    int R= count(s.begin(), s.end(),'R');
    int L= count(s.begin(), s.end(),'L');
    int D= count(s.begin(), s.end(),'D');
    int U= count(s.begin(), s.end(),'U');
    int tmp1= min(R,L);
    R-=tmp1;
    L-=tmp1;
    int tmp2= min(D,U);
    D-=tmp2;
    U-=tmp2;
    cout<<(R+D+L+U)/2<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}
 