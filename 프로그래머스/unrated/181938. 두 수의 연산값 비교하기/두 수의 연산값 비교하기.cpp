#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string str1 = to_string(a);
    string str2 = to_string(b);
    int pre = stoi(str1 + str2);
    int aft = 2 * a * b;
    answer = pre;
    if (pre < aft) {
        answer = aft;
    }
    return answer;
}