#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    answer = static_cast<int>((static_cast<float>(num1) / num2) * 1000);
    return answer;
}