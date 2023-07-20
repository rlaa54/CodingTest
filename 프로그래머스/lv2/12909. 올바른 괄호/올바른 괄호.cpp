#include<string>
#include <iostream>
#include <vector>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<string> bracket;
    for(auto b : s) {
        if (b == '('){
            bracket.push_back("(");
        }
        else{
            if (bracket.empty()) {
                return false;
            }
            bracket.pop_back();
        }
    }
    if(bracket.empty()) {
        return true;
    } else {
        return false;
    }
    return answer;
}