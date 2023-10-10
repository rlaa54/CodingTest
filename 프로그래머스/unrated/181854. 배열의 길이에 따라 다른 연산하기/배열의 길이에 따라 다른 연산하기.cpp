#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    int arrSize = arr.size();
    int s = 0;
    if(arrSize % 2 == 0){
        s = 1;
    }
    for(int i = s; i < arrSize; i+=2){
        arr[i] += n;
    }
    answer = arr;
    return answer;
}