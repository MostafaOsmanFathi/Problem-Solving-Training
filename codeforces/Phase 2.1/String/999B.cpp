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
    string s;cin>>s;
    vector<int>vc(n);
    for (int i = 0; i <n ; ++i) {
        vc.at(i)=i;
    }
    for (int i = n; i >=1 ; --i) {
        if (n%i==0){
            reverse(vc.begin(),vc.begin()+i);
//            reverse(s.begin(),s.begin()+i);
        }
    }
    string ans(n,'-');
    for (int i = 0; i < n; ++i) {
        ans.at(vc.at(i))=s.at(i);
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}