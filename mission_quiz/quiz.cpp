#include <iostream>

using namespace std;

void repeat1(int a){
    cout<<"질문 # "<<a<<"\n";
}

int repeat2(){
    cout<<"\n선택하세요 (1-4) 또는 0을 입력하여 건너뛰기 : ";
    int input;
    cin>>input;
    return input;
}

void repeat3(){
    cout<<"\n--------------------------\n";
}


int correct=0;
int pass = 0;

void question1(){
    cout<<"한국의 수도는 어디입니까?\n";
    cout<<"1. 서울\n";
    cout<<"2. 부산\n";
    cout<<"3. 인천\n";
    cout<<"4. 대구\n";
}

void question2(){
    cout<<"한국의 국화는 무엇입니까??\n";
    cout<<"1.장미\n";
    cout<<"2.백합\n";
    cout<<"3.무궁화\n";
    cout<<"4.진달래\n";
}

void question3(){
    cout<<"한국의 전통 음식 '김치'는 어떤 재료로 만들어집니까?\n";
    cout<<"1.양파\n";
    cout<<"2.고추\n";
    cout<<"3.배추\n";
    cout<<"4.당근\n";
}

void question4(){
    cout<<"한국의 대표적인 축제인 '철원 쌀축제'는 어느 계절에 열리나요?\n";
    cout<<"1.봄\n";
    cout<<"2.여름\n";
    cout<<"3.가을\n";
    cout<<"4.겨울\n";
}

void question5(){
    cout<<"한국의 최고 높은 산은 무엇입니까?\n";
    cout<<"1.한라산\n";
    cout<<"2.설악산\n";
    cout<<"3.지리산\n";
    cout<<"4.오대산\n";
}

void question6(){
    cout<<"한국의 유명한 불교사찰인 '경복궁'은 어느 도시에 있습니까?\n";
    cout<<"1.부산\n";
    cout<<"2.서울\n";
    cout<<"3.대구\n";
    cout<<"4.광주\n";
}


int main(){
    int answer1, answer2, answer3, answer4, answer5, answer6;
    string ans1, ans2, ans3, ans4, ans5, ans6;

// 1번 질문
    repeat1(1);
    question1();
    answer1 = repeat2();
    if (answer1 == 1){
        correct+=1;
        ans1 = "서울";
    }
    else if (answer1 == 2)ans1 = "부산";
    else if (answer1 == 3)ans1 = "인천";
    else if (answer1 == 4)ans1 = "대구";
    else if (answer1 == 0){
        ans1 = "0";
        pass+=1;
    }
    else ans1 = "잘못된 입력이 들어왔습니다";
    repeat3();
// 2번 질문
    repeat1(2);
    question2();
    answer2 = repeat2();
    if (answer2 == 3){
        correct+=1;
        ans2 = "무궁화";}
    else if (answer2 == 1)ans2 = "장미";
    else if (answer2 == 2)ans2 = "백합";
    else if (answer2 == 4)ans2 = "진달래";
    else if (answer2 == 0){
        ans2 = "0";
        pass+=1;}
    else ans2 = "잘못된 입력이 들어왔습니다";
    repeat3();
// 3번 질문
    repeat1(3);
    question3();
    answer3 = repeat2();
    if (answer3 == 3){
        correct+=1;
        ans3 = "배추";
    }
    else if (answer3 == 1)ans3 = "양파";
    else if (answer3 == 2)ans3 = "고추";
    else if (answer3 == 4)ans3 = "당근";
    else if (answer3 == 0){
        pass+=1;
        ans3 ="0";}
    else ans3 = "잘못된 입력이 들어왔습니다";
    repeat3();
// 4번 질문
    repeat1(4);
    question4();
    answer4 = repeat2();
    if (answer4 == 3){
        correct+=1;
        ans4 = "가을";
    }
    else if (answer4 == 1)ans4 = "봄";
    else if (answer4 == 2)ans4 = "여름";
    else if (answer4 == 4)ans4 = "겨울";
    else if (answer4 == 0){
        ans4 = "0";
        pass+=1;}
    else ans4 = "잘못된 입력이 들어왔습니다";
    repeat3();
// 5번 질문
    repeat1(5);
    question5();
    answer5 = repeat2();
    if (answer5 == 1){
        correct+=1;
        ans5 = "한라산";
    }
    else if (answer5 == 2)ans5 = "설악산";
    else if (answer5 == 3)ans5 = "지리산";
    else if (answer5 == 4)ans5 = "오대산";
    else if (answer5 == 0){
        pass+=1;
        ans5 = "0";}
    else ans5 = "잘못된 입력이 들어왔습니다";
    repeat3();
// 6번 질문
    repeat1(6);
    question6();
    answer6 = repeat2();
    if (answer6 == 2){
        correct+=1;
        ans6 = "서울";
    }
    else if (answer6 == 1)ans6 = "부산";
    else if (answer6 == 3)ans6 = "대구";
    else if (answer6 == 4)ans6 = "광주";
    else if (answer6 == 0){
        pass+=1;
        ans6="0";}
    else ans6 = "잘못된 입력이 들어왔습니다";
    repeat3();

// 정답목록 확인
    cout<<"\n======= ======= ======= =======\n";
    cout<<"\n======= 정답 목록 =======\n";
    cout<<"\n======= ======= ======= =======\n";

    // 1번 질문
    repeat1(1);
    question1();
    cout<<"선택한 답 : "<<ans1<<"\n";
    cout<<"정답 : 서울\n";
    cout<<"\n계속하려면 아무키나 누르세요...";
    int garbage;
    cin>>garbage;
    cout<<"\n";
    repeat3();
// 2번 질문
    repeat1(2);
    question2();
    cout<<"선택한 답 : "<<ans2<<"\n";
    cout<<"정답 : 무궁화\n";
    cout<<"\n계속하려면 아무키나 누르세요...";
    cin>>garbage;
    cout<<"\n";
    repeat3();
// 3번 질문
    repeat1(3);
    question3();
    cout<<"선택한 답 : "<<ans3<<"\n";
    cout<<"정답 : 배추\n";
    cout<<"\n계속하려면 아무키나 누르세요...";
    cin>>garbage;
    cout<<"\n";
    repeat3();
// 4번 질문
    repeat1(4);
    question4();
    cout<<"선택한 답 : "<<ans4<<"\n";
    cout<<"정답 : 가을\n";
    cout<<"\n계속하려면 아무키나 누르세요...";
    cin>>garbage;
    cout<<"\n";
    repeat3();
// 5번 질문
    repeat1(5);
    question5();
    cout<<"선택한 답 : "<<ans5<<"\n";
    cout<<"정답 : 한라산\n";
    cout<<"\n계속하려면 아무키나 누르세요...";
    cin>>garbage;
    cout<<"\n";
    repeat3();
// 6번 질문
    repeat1(6);
    question6();
    cout<<"선택한 답 : "<<ans6<<"\n";
    cout<<"정답 : 서울\n";
    cout<<"\n계속하려면 아무키나 누르세요...";
    cin>>garbage;
    cout<<"\n";
    repeat3();

// 결과
    cout<<"\n\n======= ======= ======= =======\n";
    cout<<"=======      결과     =======\n";
    cout<<"======= ======= ======= =======\n";
    cout<<"총 질문 수 : 6\n";
    cout <<"정답 : "<<correct<<"\n";
    cout<<"오답 : "<<6-correct<<"\n";
    cout<<"건너뛴 질문 : "<<pass<<"\n";


    return 0;
}