#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    int i = my_string.size() - n;
    answer = my_string.substr(i, n);
    return answer;
}