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
    unordered_set<int>st;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        st.insert(arr[i]);
    }
    int tmp=st.size();
    st.clear();
    for (int i = n-1; i >=0 ; --i) {
        st.insert(arr[i]);
        if (st.size()==tmp){
            cout<<arr[i]<<endl;
            return;
        }

    }
    cout<<arr[0]<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}