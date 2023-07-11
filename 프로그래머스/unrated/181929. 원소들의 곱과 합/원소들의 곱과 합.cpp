#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int mul = 1;
    int sumPow = 0;
    for(auto s : num_list) {
        sumPow += s;
        mul *= s;
    }
    sumPow *= sumPow;
    cout << sumPow  << mul;
    answer = mul < sumPow ? true : false;
    return answer;
}