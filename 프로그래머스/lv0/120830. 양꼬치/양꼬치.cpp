#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int s = n / 10;
    answer = (n * 12000) + ((k-s)*2000);
    return answer;
}