#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int answer2 = 0;
    for (int i = 1; i <= n; i++) {
        // 짝수라면    
        if (i % 2 == 0) {
            answer2 += i * i;
        }
        // 홀수라면
        else {
            answer += i;
        }
    }
    if (n % 2 == 0) {answer = answer2;}
    return answer;
}