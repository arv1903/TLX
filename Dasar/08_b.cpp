#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, temp;
    bool prime=true;
    cin >> N;

    for (int i=0; i<N;i++){
        cin >> temp;
        if (temp!=1){
            for (int i=2; i*i<=temp; i++){
                if (temp % i == 0) {
                    prime = false;
                    break;
                }
            }
        } else {
            prime = false;
        } 
        if (prime == true){
            cout << "YA" << endl;
        } else {
            cout << "BUKAN" << endl;
        }
        prime = true;
    }


    return 0;
}