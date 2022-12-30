#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;

    int sum = 0;

    for (int i = 0; i < s.size(); i++){
        /*
        C++では文字リテラルを''で表現する．
        */
        if (s[i] == '1'){
            sum += 1;
        }
    }

    cout << sum << endl;
    


}