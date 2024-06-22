#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(a,b) (((a)/gcd(a,b))*(b))
#define inf 0x3f3f3f3f3f3f3f3fLL
#define mSet(arr,value) memset((arr),(value),(sizeof (arr)))
#define int long long
using namespace std;

void solve(){
///==================================================
    string n;
    int k;
    cin>>n>>k;
    int l=0,r= min(k,(int)n.size()-1);
    while (l<r){
        int mxPoss= max_element(n.begin()+l,n.begin()+r+1)-n.begin();
        if (mxPoss!=l){
            k-=mxPoss-l;
            for (int i = mxPoss-1; i >=l ; --i) {
                swap(n.at(i),n.at(i+1));
            }

        }
        ++l;
        r= min(l+k,(int)n.size()-1);
    }
    cout<<n<<endl;

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}