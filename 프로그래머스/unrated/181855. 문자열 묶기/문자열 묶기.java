class Solution {
    public int solution(String[] strArr) {
        int answer = 0;
        int[] cArr = new int[31];
        for(int i = 0; i < strArr.length; i++){
            cArr[strArr[i].length()]++;
        }
        for(int i = 0; i < cArr.length; i++){
            if(answer < cArr[i]){
                answer = cArr[i];
            }
        }
        return answer;
    }
}