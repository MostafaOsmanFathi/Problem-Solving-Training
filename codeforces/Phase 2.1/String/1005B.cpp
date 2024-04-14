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
    string s1,s2;cin>>s1>>s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    if (s2.size()>s1.size())
        s1.swap(s2);

    int ans=s1.size()-s2.size();
    s1=s1.substr(0,s2.size());
    int i = 0;
    for ( ;i < s1.size(); ++i) {
        if (s1.at(i)!=s2.at(i))break;
    }
    i=(s1.size()-i);
    ans+=(i*2);
    //    while (s1!=s2){
//        ++ans;
//        if (s1.size()>s2.size())
//            s1.pop_back();
//        else if (s1.size()<s2.size())
//            s2.pop_back();
//        else{
//            if (!s1.empty())
//                s1.pop_back();
//            else
//                s2.pop_back();
//        }
//    }

    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}