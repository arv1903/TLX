#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, temp, counter = 0;
    cin >> N;

    for (int i=0; i<N;i++){
        cin >> temp;
        if (temp!=1){
            for (int i=1; i*i<=temp; i++){
                if (temp % i == 0) {
                    counter++;
                }
            }
        } else {
            counter = 1;
        } 
        if (counter == 1 || counter == 2){
            cout << "YA" << endl;
        } else {
            cout << "BUKAN" << endl;
        }
        counter = 0;
    }


    return 0;
}