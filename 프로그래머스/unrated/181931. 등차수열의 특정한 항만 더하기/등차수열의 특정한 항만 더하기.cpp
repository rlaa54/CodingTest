#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    vector<int> includeSum;
    for(int i = 0; i < included.size(); i++) {
        if (i == 0) {
            answer = a;
        } else {
            answer += d;
        }
        if (included[i]) {
            includeSum.push_back(answer);
        }
    }
    answer = 0;
    for(auto s : includeSum) {
        answer += s;
    }
    return answer;
}