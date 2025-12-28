#include <iostream>
using namespace std;

int sumDigits(int num, int temp = 0){
    if (num == 0) return temp; 
    int lastnum = num % 10;
    int newn = temp + lastnum;
    return sumDigits(num/10, newn);
}

int sumDigits_method2(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumDigits_method2(n / 10);
}

int main(){
    int n;
    cin >> n;
    cout << sumDigits(n) << endl;
    cout << sumDigits_method2(n) << endl;
    return 0;
}   