#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        // 대문자
        if(int(str[i]) >= 65 && int(str[i]) <= 90) {
            str[i] = char(int(str[i]) + 32);
        } 
        // 소문자
        else if(int(str[i]) >= 97 && int(str[i]) <= 122) {
            str[i] = char(int(str[i]) -32);
        }
    }
    cout << str << endl;
    return 0;
}