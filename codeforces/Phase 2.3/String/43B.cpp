#include <iostream>
using namespace std;
int main() {
string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
int frqup[26]{};
int frqlow[26]{};
    for (int i = 0; i <s1.length() ; ++i) {
        if (isalpha(s1.at(i))){
            if (isupper(s1.at(i)))frqup[s1.at(i)-'A']++;
            else frqlow[s1.at(i)-'a']++;
        }
    }
    int frqup2[26]{};
    int frqlow2[26]{};
    for (int i = 0; i <s2.length() ; ++i) {
        if (isalpha(s2.at(i))){
            if (isupper(s2.at(i)))frqup2[s2.at(i)-'A']++;
            else frqlow2[s2.at(i)-'a']++;
        }

    }


bool s= false;
    for (int i = 0; i < 26; ++i) {

        if (frqup[i]>=frqup2[i]&&frqlow[i]>=frqlow2[i]){s= true;}
        else{s= false ;break;}
    }

cout<<((s)?"YES":"NO");

    return 0;
}