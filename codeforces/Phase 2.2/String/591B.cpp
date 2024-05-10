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
    char arr[26];
    for (int i = 0; i < 26; ++i) {
        arr[i]=i+'a';
    }
    int n,m;cin>>n>>m;
    string s;cin>>s;
    while (m--){
        char a,b;cin>>a>>b;
        swap(arr[a-'a'],arr[b-'a']);
    }

    for (auto& x:s) {
        int tmp=find(arr,arr+26,x)-arr;
        cout<<(char)(tmp+'a');
    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}