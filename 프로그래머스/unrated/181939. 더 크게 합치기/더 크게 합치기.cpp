#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string temp1 = to_string(a) + to_string(b);
    string temp2 = to_string(b) + to_string(a);
    int num1 = stoi(temp1);
    int num2 = stoi(temp2);
    answer = num2;
    if (num1 > num2) {
        answer = num1;
    }
    return answer;
}