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
    int arr[n],arr2[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    sort(arr2,arr2+n);

    for (int i = 0; i <n ; ++i) {
        if (arr[i]==arr2[i])continue;
        int tmp= find(arr+i,arr+n,arr2[i])-arr;
        for (int j = tmp; j >i ; --j) {
            cout<<j<<" "<<j+1<<endl;
            swap(arr[j-1],arr[j]);
        }

    }
    cout<<" ";
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}