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
    string s;cin>>s;
    bool PutBracket{false};
    if (s.front()=='-')
        PutBracket= true,cout<<"(",s.erase(0,1);

    cout<<"$";
    if (s.find('.')==string::npos)
        s.push_back('.');
    s+="0000";

    int poss=s.find('.');
    string fraction=s.substr(poss,3);
    int tmp1=s.size()-(s.size()-poss);
    int tmp=(tmp1)%3;
    cout<<s.substr(0,tmp);
    if (tmp1>3 and tmp)cout<<",";
    for (int i = tmp,cnt{0}; i <poss ; ++i) {
        cout<<s.at(i);
        if ((++cnt)%3==0 and i!= poss-1)
            cout<<",";
    }
    cout<<fraction;
    if (PutBracket)
        cout<<")";

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}