#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define inf 0x3f3f3f3f3f3f3f3fLL
#define int long long
using namespace std;

void solve(){
///==================================================
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    auto mn= min_element(arr,arr+n)-arr;
    auto mx= max_element(arr,arr+n)-arr;
    if (mn==mx){
        cout<<"Exemplary pages."<<endl;
        return;
    }
    int tmp=arr[mx]-arr[mn];
    tmp/=2;
    arr[mn]+=tmp;
    arr[mx]-=tmp;
    for (int i = 1; i < n; ++i) {
        if (arr[i]!=arr[i-1]){
            cout<<"Unrecoverable configuration."<<endl;
            return;
        }
    }
    cout<<tmp<<" ml. from cup #"<<mn+1<<" to cup #"<<mx+1<<".";
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}