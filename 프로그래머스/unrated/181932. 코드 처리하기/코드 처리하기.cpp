#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string code) {
    string answer = "";
    bool mode = false;
    for (int i = 0; i < code.length(); i++) {
        if (code[i] == '1') {
            mode ? mode=false : mode=true;
        }
        else {
            if (mode) {
                if(i % 2 != 0) {
                    answer += code[i];
                }
            }
            else {
                if(i % 2 == 0){
                    answer += code[i];
                }
            }
        }
    }
    if (answer == "") {
        answer = "EMPTY";
        }
    return answer;
}