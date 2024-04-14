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
    int m;cin>>m;
    int arr[s.size()];
    memset(arr,0, sizeof arr);
    while (m--){
        int tmp;cin>>tmp;
        ++arr[tmp-1];
    }
    int partialSum[s.size()+1];
    memset(partialSum,0, sizeof partialSum);
    for (int i = 0; i <s.size() ; ++i) {
        arr[i]%=2;
        if (arr[i]){
           ++partialSum[i];
           --partialSum[s.size()-i];
        }
    }
    partial_sum(partialSum,partialSum+s.size()+1,partialSum);
    for (int i = 0; i <s.size()/2 ; ++i) {
        if (partialSum[i]&1){
            swap(s.at(i),s.at(s.size()-i-1));
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