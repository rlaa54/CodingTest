#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    bool f1 = false;
    while(true){
        f1 = false;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] >= 50 && arr[i] % 2 == 0){
                arr[i] /= 2;
                f1 = true;
            }
            else if(arr[i] < 50 && arr[i] % 2 != 0){
                arr[i] *= 2;
                arr[i]++;
                f1 = true; 
            }
        }
        // x번 반복 끝에 더이상 변할 값이 없음
        if(!f1){
            break;
        }
        answer++;
    }
    return answer;
}