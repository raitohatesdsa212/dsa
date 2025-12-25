#include <iostream>
#include <vector>
using namespace std;

long long fibVector(int n, vector<long long> &brain){
    //base-case
    if (n <= 1) return n;
    //check existance
    if (brain[n] != -1){
        return brain[n];
    }

    //remember
    brain[n] = fibVector(n-1, brain) + fibVector(n-2, brain);

    return brain[n];
}


int main(){
    int v = 50;
    int n;
    cin >> n;
    vector<long long> brain(v + 1, -1); //brain(<size>, <arg>)
    cout << fibVector(n, brain) << endl;
    return 0;
}
