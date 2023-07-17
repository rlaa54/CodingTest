#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    // arr의 인덱스
    int big = 0;
    // 최빈값
    int mode = 0;
    // array 안의 가장 큰 수
    for(auto i : array) {
        if(i > big){ big = i; }
    }
    cout << big << endl;
    vector<int> arr(big + 1, 0);
    for(auto i : array){
        arr[i]++;
    }
    for(int i = 0; i < arr.size(); i++){
        // 최빈값 비교
        if(arr[i] > mode){
            mode = arr[i];
            answer = i;
        } else if(arr[i] == mode){
            answer = -1;
        }
    }
    return answer;
}