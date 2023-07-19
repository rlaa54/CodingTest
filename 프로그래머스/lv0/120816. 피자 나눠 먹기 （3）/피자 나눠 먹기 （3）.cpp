#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    int pizza = 1;
    int i = 0;
    while(true) {
        i = slice * pizza;
        if(i >= n){
            break;
        }
        pizza++;
    }
    answer = pizza;
    return answer;
}