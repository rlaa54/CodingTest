#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string number) {
    int answer = 0;
    for(auto s : number) {
        answer += static_cast<int>(s) - 48;
    }
    cout << endl << answer << " ";
    answer = answer % 9;
    return answer;
}