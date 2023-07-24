#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int s = myString.rfind(pat);
    int e = s + pat.size();
    cout << "s:" << s << "e:" << e;
    answer = string(myString.begin(), myString.begin() + e);
    return answer;
}