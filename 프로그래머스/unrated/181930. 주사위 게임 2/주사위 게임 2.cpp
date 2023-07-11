#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    if(a == b) {
        // 셋 다 같을 때
        if (b == c) {
            answer = (a + b + c) * ((a*a)+(b*b)+(c*c)) * ((a*a*a)+(b*b*b)+(c*c*c));   
        }
        // 2개가 같을 때
        else {
            answer = (a+b+c) * ((a*a)+(b*b)+(c*c));
        }
    }
    else if (a == c) {
        answer = (a+b+c) * ((a*a)+(b*b)+(c*c));
    }
    else if (b == c) {
        answer = (a+b+c) * ((a*a)+(b*b)+(c*c));
    }
    else {
        answer = a+b+c;
    }
    return answer;
}