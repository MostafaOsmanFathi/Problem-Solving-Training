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
    map<char,int >mp;
    mp['A'];
    mp['G'];
    mp['C'];
    mp['T'];
    int mx{0};
    stack<int>poss;
    for (int i = 0; i < n; ++i) {
        int &tmp=mp[s.at(i)];
        ++tmp;
        if (s.at(i)!='?')
            mx= max(tmp,mx);
        else
            poss.push(i);
    }
    int &qq=mp['?'];
    if (!qq){
        for (const auto& x:mp) {
            if (x.first=='?')continue;
            if (x.second!=mx){
                cout<<"===\n";
                return;
            }
        }
        cout<<s<<endl;
        return;
    }
    int req{0};
    for (const auto& x:mp) {
        if (x.first!='?')
            req+=mx-x.second;
    }

    if ((qq<req) or (qq>req && (qq-req)%4!=0)){
        cout<<"==="<<endl;
        return;
    }
    int inc{((qq<=req)?0:qq-req)/4};
    for (auto& x:mp) {
        if (x.first=='?')continue;
        x.second=(mx-x.second)+inc;
        while (x.second--){
            s.at(poss.top())=x.first;
            poss.pop();
        }
    }
    cout<<s<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}