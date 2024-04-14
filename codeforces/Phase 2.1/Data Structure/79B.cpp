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
const string Plants[]{"Carrots","Kiwis","Grapes"};
void solve(){
///==================================================
    int n,m,k,q;cin>>n>>m>>k>>q;
    vector<pair<int,int>>vc(k);
    for (int i = 0; i < k; ++i) {
        cin>>vc.at(i).first;
        cin>>vc.at(i).second;
    }
    sort(vc.begin(), vc.end());
    while (q--){
        int a,b;cin>>a>>b;
        int ShiftNum= std::upper_bound(vc.begin(), vc.end(), make_pair(a,b))-vc.begin();
        int tmp=(((a-1)*m)+(b))-1- ShiftNum;
        tmp%=3;
        if (ShiftNum!=0&&vc.at(ShiftNum-1)== make_pair(a,b)){
            cout<<"Waste\n"<<flush;
        }else
            cout<<Plants[tmp]<<endl<<flush;


    }

///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}