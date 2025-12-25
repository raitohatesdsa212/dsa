#include <iostream>

using namespace std;

int fib(int n){
    if (n<=1) return n;
    if (n<=1 && n >=30){
        cout << n << "khong nam trong khoang [1, 30]" << endl;
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    cout << fib(8) << endl;
    return 0;
}