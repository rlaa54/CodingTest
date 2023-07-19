#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    float discount;
    if(price >= 500000){
        discount = price * 0.8;
    }
    else if(price >= 300000){
        discount = price * 0.9;
    }
    else if(price >= 100000){
        discount = price * 0.95;
    }
    else {
        discount = price;
    }
    answer = static_cast<int>(discount);
    return answer;
}