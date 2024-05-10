#include <bits/stdc++.h>
#define MOSTAFAOSMAN() ios_base::sync_with_stdio(false);cout.tie(NULL),cin.tie(NULL);
#define ll long long
#define ld long double
#define outCondtion(a) cout<<((a)?"YES":"NO")<<"\n";
#define tloop int t;cin>>t;cin.ignore();while(t--)
#define endl "\n"
#define lcm(x,y) ((x/__gcd(x,y))*y)
#define inf 0x3f3f3f3f3f3f3f3fLL
#define mSet(arr,value) memset((arr),(value),(sizeof (arr)))
#define int long long
using namespace std;
int n,k;
string rec(string tmp,int i){
    if (i==n+1)return tmp;
    string tmp2=tmp+" "+to_string(i)+" "+tmp;
    return rec(tmp2,i+1);
}
void solve(){
///==================================================
    cin>>n>>k;
    if (!(k&(k-1))){
        cout<<log2(k)+1<<endl;
        return;
    }else if(k%4==0) {
        for (int i = 51; i >=0 ; --i) {
            if (k%(1LL<<i)==0){
                cout<<i+1<<endl;
                return;
            }
        }
        cout<<3<<endl;

    }else if (k%4==1 or k%4==3){
            cout<<1<<endl;
            return;
    }else if (k%4==2){
        cout<<2<<endl;
        return;
    }
//    string tmp;
//    for (int i = 0; i < k; ++i) {
//        str>>tmp;
//    }
//    cout<<tmp<<endl;
///==================================================
}
signed main() {MOSTAFAOSMAN()

//    tloop
    solve();

    return 0;
}