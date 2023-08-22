#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int i = 0;
    while(i < arr.size()){
        if(answer.empty()){
            answer.push_back(arr[i]);
        } else if(answer[answer.size() - 1] == arr[i]){
            answer.pop_back();
        } else {
            answer.push_back(arr[i]);
        }
        i++;
    }
    if(answer.empty()){
        answer.push_back(-1);
    }
    return answer;
}