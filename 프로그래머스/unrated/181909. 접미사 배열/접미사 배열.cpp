#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string smallstr = "";
    for (int i = 0; i < my_string.size(); i++){
        smallstr = my_string.substr(i, my_string.size());
        answer.push_back(smallstr);
    }
    sort(answer.begin(), answer.end());
    return answer;
}