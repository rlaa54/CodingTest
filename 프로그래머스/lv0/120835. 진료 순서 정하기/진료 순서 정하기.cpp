#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    int i = 0;
    vector<int> temp = emergency;
    sort(temp.begin(), temp.end(), greater<int>());
    for(auto e : emergency){
        i = 1;
        for(auto t : temp){
            if(t == e){
                answer.push_back(i);
                break;
            }
            i++;
        }
    }
    return answer;
}