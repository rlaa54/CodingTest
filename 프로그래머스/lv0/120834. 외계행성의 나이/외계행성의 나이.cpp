#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int age) {
    string answer = "";
    for(auto s : to_string(age)){
        if(s == '0'){
            answer += 'a';
        }
        else if(s == '1'){
            answer += 'b';
        }
        else if(s == '2'){
            answer += 'c';
        }
        else if(s == '3'){
            answer += 'd';
        }
        else if(s == '4'){
            answer += 'e';
        }
        else if(s == '5'){
            answer += 'f';
        }
        else if(s == '6'){
            answer += 'g';
        }
        else if(s == '7'){
            answer += 'h';
        }
        else if(s == '8'){
            answer += 'i';
        }
        else if(s == '9'){
            answer += 'j';
        }
    }
    return answer;
}