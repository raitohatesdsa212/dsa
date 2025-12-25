#include <iostream>
#include <unordered_map>
using namespace std;

long long HashFib(int n, unordered_map<int, long long> &brain){
    //base-case
    if (n <= 1) return n;

    //check existacne
    if (brain.find(n) != brain.end()){
        return brain[n];
    }
    
    brain[n] = HashFib(n - 1, brain) + HashFib(n - 2, brain);

    return brain[n];

}




int main(){
    int n;
    cin >> n;
    unordered_map<int ,long long> brain;
    cout << HashFib(n, brain);
    
    cout << endl;
    return 0;
}