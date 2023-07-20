#include <string>
#include <vector>
#include <cstring>
#include <iostream>
using namespace std;

int solution(string myString, string pat) {
    int answer = 0, e = 0, i = 0;
    string temp, temp2;
    for(auto s : myString){
        temp += toupper(s); 
    }
    myString = temp;
    temp = "";
    for(auto s : pat){
        temp += toupper(s);
    }
    pat = temp;
    i = myString.find(pat);
    e = myString.size();
    if(i >= 0 && i < e){
        answer = 1;
    };
    return answer;
}