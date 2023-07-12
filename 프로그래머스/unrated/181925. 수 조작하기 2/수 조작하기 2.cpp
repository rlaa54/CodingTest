#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int preNum = numLog[0];
    int nextNum = 0;
    int subNum = 0;
    for (int i = 1; i < numLog.size(); i++) {
        nextNum = numLog[i];
        subNum = preNum - nextNum;
        // s
        if(subNum == 1) {answer += 's';}
        // w
        else if(subNum == -1) {answer += 'w';}
        // a
        else if(subNum == 10) {answer += 'a';}
        // d
        else if(subNum == -10) {answer += 'd';}
        preNum = numLog[i];
    }
    return answer;
}