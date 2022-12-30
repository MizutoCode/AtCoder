#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    int X;
    string S;

    cin >> N >> X;
    cin >> S;

    int pt = X;

    for (int i = 0; i <= N; i++){
        if (S[i] == 'o'){
            pt += 1;
        }
        else if ((S[i] == 'x') && pt != 0){
            pt -= 1;
        }
    }

    cout << pt << endl;
    
}