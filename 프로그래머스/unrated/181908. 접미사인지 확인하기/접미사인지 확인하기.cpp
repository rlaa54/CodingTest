#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    for(int i = 0; i < my_string.size(); i++){
        if (my_string.substr(i) == is_suffix) return 1;
    }
    return answer;
}