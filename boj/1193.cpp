#include <iostream>

using namespace std;

int main(){
    int X;
    cin>>X;
    int count = 0;
    int N=X;

    while (N>=1){
        count++;
        N=N-count;  // 13이라고 가정. 13 -> 12 -> 10 -> 7 -> 3 (count : 12일때 2, 10일때 3, 7일때 4, 3일떄, 5)
    }
    int iterable = count;
    int first_row_num = 1;
    while (count>1){
        count--;
        first_row_num = first_row_num+count;
    }
    int colum = iterable - (X-first_row_num);
    int row = (X-first_row_num)+1;
    
    // 아 문제 잘못 봐서 지그재그로 안 풀고 오른쪽 위에서 아래로 내림. ㅡㅡ;; 그냥 홀수번째 항일 때만 row colum 바꿔서 출력하면 해결될듯 함.
    if (iterable%2 == 1){
        cout<<colum<<"/"<<row;
    }
    else cout<<row<<"/"<<colum;
    return 0;
}
// 1, 2, 6, 7, 15, 16,, ... (1, 2, 3, 4, 5... 공차가 1씩 증가)
// 3, 5, 8, 14,
// 4, 9, 13,
// 10, 12,
// 11,

// 13 -1-2-3-4-5 (처음으로 5를 뺐을 때 음수가 됨. -> 대각선 기준으로 5번쨰 줄에 있음)
// 먼저 iterable을 구함. 그러면 몇번째 줄인 지 나옴. -> 그 i번째에 해당하는 첫째줄 수 구함. -> N-i빼면 그 수만큼 i번째에서 가로 세로 빼주면 그게 세로줄과 가로줄 나옴