#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N;
    int A;
    int B; 
    cin >> N >> A >> B;

    int i;
    int sum;
    int dig; //余り
    int ans = 0; //最後の集計で使う

    for(i = 1; i <= N; i++){
        dig = 0;
        sum = 0;
        dig = i % 10;
        sum += dig;

        //cout << "dig = " << dig << " " << "sum" << sum << endl;
        
        dig = (i/10) % 10;
        sum += dig;

        dig = (i/100) % 10;
        sum += dig;

        dig = (i/1000) % 10;
        sum += dig;

        dig = (i/10000) % 10;
        sum += dig;

        //cout << "i = "  << i << " " << "dig = " << dig << " " << "sum" << sum << endl;


        if((A <= sum) && (sum <= B)){
            //cout << "i = " << " " << i << endl;
            ans += i;
        }

    }

    cout << ans << endl;
}