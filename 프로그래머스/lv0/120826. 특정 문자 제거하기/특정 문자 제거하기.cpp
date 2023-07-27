#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    int i = 0;
    // cout << letter[1];
    for(int i = 0; i < my_string.size(); i++){
        if(my_string[i] == letter[0]){
            my_string.erase(my_string.begin()+i);
            i--;
        }
    }
    answer = my_string;
    return answer;
}