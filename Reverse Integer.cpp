#include <iostream>
#include <vector>

using namespace std;

int reverse( int x ){

    int y = 0;
    while(x != 0 ){
        y = y*10 + x%10;
        x = x/10;
    }
    if (y > INT_MAX || y < INT_MIN){
        return 0;
    }
    else{
        return y;
    }
}

int main() {
    int x {};
    cin >> x;
    cout << reverse( x );
    return 0;
}
