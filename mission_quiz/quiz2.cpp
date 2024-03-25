#include <iostream>
#include <string>

using namespace std;

// 질문과 답변을 저장하는 구조체
struct Question {
    string question;
    string options[4];
    string answer;
};

void printQuestion(int number, Question& q) {
    cout << "질문 # " << number << endl;
    cout << q.question << endl;
    for (int i = 0; i < 4; ++i) {
        cout << i + 1 << ". " << q.options[i] << endl;
    }
}

int correct = 0;
int pass = 0;

int getAnswer() {
    int answer;
    cout << "\n선택하세요 (1-4) 또는 0을 입력하여 건너뛰기: ";
    cin >> answer;
    return answer;
}

int main() {
    Question questions[] = {
        {"한국의 수도는 어디입니까?", {"서울", "부산", "인천", "대구"}, "1"},
        {"한국의 국화는 무엇입니까?", {"장미", "백합", "무궁화", "진달래"}, "3"},
        {"한국의 전통 음식 '김치'는 어떤 재료로 만들어집니까?", {"양파", "고추", "배추", "당근"}, "3"},
        {"한국의 대표적인 축제인 '철원 쌀축제'는 어느 계절에 열리나요?", {"봄", "여름", "가을", "겨울"}, "3"},
        {"한국의 최고 높은 산은 무엇입니까?", {"한라산", "설악산", "지리산", "오대산"}, "1"},
        {"한국의 유명한 불교사찰인 '경복궁'은 어느 도시에 있습니까?", {"부산", "서울", "대구", "광주"}, "2"}
    };


    
    string answers[6]; // 선택한 답 저장할 배열 정의

    for (int i = 0; i < 6; ++i) {
        printQuestion(i + 1, questions[i]);
        int answer = getAnswer();
        
        if (answer >= 1 && answer <= 4) {
            answers[i]= questions[i].options[answer-1]; // 인덱스로 접근하여 선택한 답에 해당하는 문자열 저장
            if (questions[i].answer == to_string(answer)) {
                correct++;
            }
        } else if (answer == 0) {
            pass++;
        } else {
            cout << "잘못된 입력이 들어왔습니다" << endl;
        }
        cout << "\n--------------------------\n";
    }

    cout<<"\n======= ======= ======= =======\n";
    cout<<"\n======= 정답 목록 =======\n";
    cout<<"\n======= ======= ======= =======\n";
    string presssomething;
    for (int i =0; i<6; i++){
        printQuestion(i+1, questions[i]);
        cout<<"선택한 답 : "<<answers[i]<<"\n";
        cout<<"정답 : "<<questions[i].options[stoi(questions[i].answer)-1]<<"\n";
        cout<<"\n계속하려면 아무 키나 누르세요...";
        cin>>presssomething;
        cout<<"\n-----------------------------\n";
    }



    cout << "\n======= ======= ======= =======\n";
    cout << "=======      결과     =======\n";
    cout << "======= ======= ======= =======\n";
    cout << "총 질문 수 : 6\n";
    cout << "정답 : " << correct << "\n";
    cout << "오답 : " << 6 - correct-pass << "\n";
    cout << "건너뛴 질문 : " << pass << "\n";

    return 0;
}
