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
    int n;cin>>n;
    int arr[26];
    for (int i = 0; i <26 ; ++i) {
        cin>>arr[i];
    }
    int mx= max_element(arr,arr+26)-arr;
    while (n--)
        s.push_back(char(mx+'a'));
    int ans{0};
    for (int i = 0; i < s.size(); ++i) {
        ans+=(i+1)*arr[s.at(i)-'a'];
    }
    cout<<ans<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}