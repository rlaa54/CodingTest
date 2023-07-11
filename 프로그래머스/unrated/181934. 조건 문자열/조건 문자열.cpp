#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    if (eq == "!") {
        if (ineq == ">") {
            answer = n > m;
        }
        else {
            answer = n < m;
        }
    }
    else {
        if (ineq == ">") {
            answer = n >= m;
        }
        else {
            answer = n <= m;
        }
    }
    return answer;
}