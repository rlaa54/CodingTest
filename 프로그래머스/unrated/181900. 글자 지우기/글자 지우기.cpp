#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    for(auto idx : indices) {
        my_string[idx] = '0';
    }
    for(auto s : my_string) {
        if(s == '0'){
            cout << s << " ";
        }
        else {answer += s;}
    }
    return answer;
}