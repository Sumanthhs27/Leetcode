#include <iostream>
#include <vector>

using namespace std;

int fib(int a){
    int x = 0;
    int y = 1;
    int dif = 0;
    while(y <= a){
        dif = a - y;
        int temp = y;
        y = x + y;
        x = temp;
    }
    return min(a-dif, y);
}

int main() {

    int num {};
    cout << "Enter number: ";
    cin >> num;
    cout << fib(num);
    return 0;
}
