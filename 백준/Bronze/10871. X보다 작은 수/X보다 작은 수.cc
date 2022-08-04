#include <iostream>
using namespace std;
int main(){
    int N, X, input;

    cin >> N >> X;

    for(int i=0; i<N; i++){
        cin >> input;
        if(X > input)
            cout << input << ' ';
    }
    return 0;
}