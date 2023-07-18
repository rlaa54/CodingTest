#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    answer = ceil(static_cast<float>(n) / 7);
    return answer;
}