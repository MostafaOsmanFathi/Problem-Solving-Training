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
    string s2;cin>>s2;
    int cnt{0};
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i)!=s2.at(i))++cnt;
    }
    if (cnt&1){
        cout<<"impossible"<<endl;
        return;
    }

    for (int i = 0; i <s.size() ; ++i) {
        if(s.at(i)!=s2.at(i)){
            if (cnt&1)
                cout<<s.at(i);
            else
                cout<<s2.at(i);
            --cnt;
        }else
            cout<<'1';
    }
    cout<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}