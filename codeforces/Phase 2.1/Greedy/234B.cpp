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
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n,k;fin>>n>>k;
    pair<int,int> arr[n];
    for (int i = 0; i <n ; ++i) {
        fin>>arr[i].first;
        arr[i].second=i+1;
    }
    sort(arr,arr+n,greater<pair<int,int>>());
    fout<<arr[k-1].first<<endl;
    for (int i = 0; i <k ; ++i) {
        fout<<arr[i].second<<" ";
    }
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}