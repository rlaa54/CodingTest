#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    char temp;
    int c = ceil((static_cast<float>(s+e)/2));
    for(int i = s, j = e; i < c; i++, j--) {
        temp = my_string[i];
        my_string[i] = my_string[j];
        my_string[j] = temp;
    }
    answer = my_string;
    return answer;
}