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
    char mp[250];
    string s1,s2;cin>>s1>>s2;
    for (int i = 0; i < 26; ++i) {
        mp[s1.at(i)]=s2.at(i);
        mp[toupper(s1.at(i))]=toupper(s2.at(i));
    }
    string s;cin>>s;
    for (int i = 0; i <s.size() ; ++i) {
        if (isalpha(s.at(i)))
            cout<<mp[s.at(i)];
        else cout<<s.at(i);
    }
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}