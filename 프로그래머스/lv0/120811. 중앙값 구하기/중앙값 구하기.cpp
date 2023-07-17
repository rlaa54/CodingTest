#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int c = array.size() / 2;
    sort(array.begin(), array.end());
    answer = array[c];
    return answer;
}