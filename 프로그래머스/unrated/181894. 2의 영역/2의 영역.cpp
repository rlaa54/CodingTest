#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int f = 0, e = 0;
    bool two = false;
    for(int i = 0; i < arr.size(); i++){
        if (two) {
            if(arr[i] == 2) {
                e = i;
                answer = {};
            }
        }
        if(!two && arr[i] == 2){
            two = true;
            f = i;
            answer = {2};
        }
    }
    for(int i = f; i <= e; i++){
        answer.emplace_back(arr[i]);
    }
    if(!two) {answer = {-1};}
    return answer;
}