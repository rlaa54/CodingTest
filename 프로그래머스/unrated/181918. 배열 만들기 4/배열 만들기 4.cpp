#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i = 0;
    while(i < arr.size()) {
        if (stk.empty() == true) {
            stk.push_back(arr[i]);
            i++;
        // stk 원소가 있다
        } else if (stk.empty() == false && stk.back() < arr[i]) {
            stk.push_back(arr[i]);
            i++;
        } else if (stk.empty() == false && stk.back() >= arr[i]) {
            stk.pop_back();
        }
    }
    
    return stk;
}