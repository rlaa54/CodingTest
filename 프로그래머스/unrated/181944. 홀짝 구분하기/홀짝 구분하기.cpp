#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    string* str1;
    if(n % 2 == 0) {
        str1 = new string("even");
    } 
    else {
        str1 = new string("odd");
    }
    cout << n << " is " + *str1 << endl;
    return 0;
}