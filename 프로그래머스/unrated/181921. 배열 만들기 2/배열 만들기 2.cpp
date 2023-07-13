#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    int biNum;
    int idx = 0;
    int num = r;
    string biStr = "";
    bool isNo = true;
    while(num != 0){
        num /= 2;
        idx++;
    }
    // 0과 5로 이루어진 숫자 조합 l 이상 r이하 정수로 구성
    // 0과 1로 구성된 이진법 조합에 5를 곱해도 됨
    // 이진법 조합하기
    for(int i = 1; i < 65; i++){
        num = i;
        while(num != 0){
            if(num % 2 == 1) {
                biStr.insert(0,"1");
            }
            else {
                biStr.insert(0,"0");
            }
            num /= 2;
        }
        biNum = stoi(biStr) * 5;
        if (biNum >= l && biNum <= r) {
            answer.push_back(biNum);
            isNo = false;
        }
        biStr.clear();
    }
    if (isNo) {
            answer.push_back(-1);
    }
    return answer;
}