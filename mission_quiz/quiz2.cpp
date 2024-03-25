#include <iostream>
#include <string>

using namespace std;

// ������ �亯�� �����ϴ� ����ü
struct Question {
    string question;
    string options[4];
    string answer;
};

void printQuestion(int number, Question& q) {
    cout << "���� # " << number << endl;
    cout << q.question << endl;
    for (int i = 0; i < 4; ++i) {
        cout << i + 1 << ". " << q.options[i] << endl;
    }
}

int getAnswer() {
    int answer;
    cout << "\n�����ϼ��� (1-4) �Ǵ� 0�� �Է��Ͽ� �ǳʶٱ�: ";
    cin >> answer;
    return answer;
}

int main() {
    Question questions[] = {
        {"�ѱ��� ������ ����Դϱ�?", {"����", "�λ�", "��õ", "�뱸"}, "1"},
        {"�ѱ��� ��ȭ�� �����Դϱ�?", {"���", "����", "����ȭ", "���޷�"}, "3"},
        {"�ѱ��� ���� ���� '��ġ'�� � ���� ��������ϱ�?", {"����", "����", "����", "���"}, "3"},
        {"�ѱ��� ��ǥ���� ������ 'ö�� ������'�� ��� ������ ��������?", {"��", "����", "����", "�ܿ�"}, "3"},
        {"�ѱ��� �ְ� ���� ���� �����Դϱ�?", {"�Ѷ��", "���ǻ�", "������", "�����"}, "1"},
        {"�ѱ��� ������ �ұ������� '�溹��'�� ��� ���ÿ� �ֽ��ϱ�?", {"�λ�", "����", "�뱸", "����"}, "2"}
    };

    int correct = 0;
    int pass = 0;
    
    string answers[6]; // ������ �� ������ �迭 ����

    for (int i = 0; i < 6; ++i) {
        printQuestion(i + 1, questions[i]);
        int answer = getAnswer();
        answers[i]= questions[i].options[answer-1]; // �ε����� �����Ͽ� ������ �信 �ش��ϴ� ���ڿ� ����
        if (answer >= 1 && answer <= 4) {
            if (questions[i].answer == to_string(answer)) {
                correct++;
            }
        } else if (answer == 0) {
            pass++;
        } else {
            cout << "�߸��� �Է��� ���Խ��ϴ�" << endl;
        }
        cout << "\n--------------------------\n";
    }

    cout<<"\n======= ======= ======= =======\n";
    cout<<"\n======= ���� ��� =======\n";
    cout<<"\n======= ======= ======= =======\n";
    string presssomething;
    for (int i =0; i<6; i++){
        printQuestion(i+1, questions[i]);
        cout<<"������ �� : "<<answers[i]<<"\n";
        cout<<"���� : "<<questions[i].options[stoi(questions[i].answer)-1]<<"\n";
        cout<<"\n����Ϸ��� �ƹ� Ű�� ��������...";
        cin>>presssomething;
        cout<<"\n-----------------------------\n";
    }



    cout << "\n======= ======= ======= =======\n";
    cout << "=======      ���     =======\n";
    cout << "======= ======= ======= =======\n";
    cout << "�� ���� �� : 6\n";
    cout << "���� : " << correct << endl;
    cout << "���� : " << 6 - correct << endl;
    cout << "�ǳʶ� ���� : " << pass << endl;

    return 0;
}
