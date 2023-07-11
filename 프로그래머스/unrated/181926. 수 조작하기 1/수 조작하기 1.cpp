#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = 0;
    for(auto s : control) {
        if (s == 'w') {
            n++;
        }
        else if ( s == 'a') {
            n -= 10;
        }
        else if ( s == 's') {
            n--;
        }
        else if ( s == 'd') {
            n += 10;
        }
    }
    answer = n;
    return answer;
}