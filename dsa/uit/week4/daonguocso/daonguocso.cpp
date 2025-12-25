#include <iostream>
using namespace std;

int reverse(int curr, int temp=0){
    if (curr == 0) return temp;
    int lastnum = curr % 10;
    int new_n = temp*10 + lastnum;
    return reverse(curr/10, new_n);

}


int main(){
    int n;
    cin >> n;
    cout << reverse(n);
    cout << endl;
    return 0;
}

