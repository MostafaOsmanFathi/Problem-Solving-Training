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
    vector<string> taxi,girl,pizza;
    int taxiMx{0},girlMx{0},pizzaMx{0};

    while (n--){
        int t;cin>>t;
        string name;cin>>name;
        int taxiCnt{0},girlCnt{0},pizzaCnt{0};
        while (t--){
            string tmp;cin>>tmp;
            if (std::count(tmp.begin(), tmp.end(),tmp.front())==6)++taxiCnt;
            else {
                char t = tmp.front();
                bool fl{true};
                for (int i = 1; i < tmp.size(); ++i) {
                    if (!isdigit(tmp.at(i)))continue;
                    if (t <= tmp.at(i)) { fl=false,++girlCnt;break; }
                    t=tmp.at(i);
                }
                if (fl)++pizzaCnt;
            }

        }
        if (taxiCnt>taxiMx)taxiMx=taxiCnt,taxi.clear(),taxi.push_back(name);
        else if (taxiCnt==taxiMx)taxi.push_back(name);

        if (girlCnt>girlMx)girlMx=girlCnt,girl.clear(),girl.push_back(name);
        else if (girlCnt==girlMx)girl.push_back(name);

        if (pizzaCnt>pizzaMx)pizzaMx=pizzaCnt,pizza.clear(),pizza.push_back(name);
        else if (pizzaCnt==pizzaMx)pizza.push_back(name);
    }
   cout<<"If you want to call a taxi, you should call: ";
    for (int i = 0; i <taxi.size() -1; ++i) {
        cout<<taxi.at(i)<<", ";
    }
    cout<<taxi.back()<<".";
    cout<<"\nIf you want to order a pizza, you should call: ";
    for (int i = 0; i <pizza.size()-1 ; ++i) {
        cout<<pizza.at(i)<<", ";
    }
    cout<<pizza.back()<<".";
    cout<<"\nIf you want to go to a cafe with a wonderful girl, you should call: ";
    for (int i = 0; i <girl.size()-1 ; ++i) {
        cout<<girl.at(i)<<", ";
    }
    cout<<girl.back()<<".";

///==================================================
}

signed main() {MOSTAFAOSMAN()
//    tloop
    solve();

    return 0;
}