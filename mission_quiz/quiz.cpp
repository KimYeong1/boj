#include <iostream>

using namespace std;

void repeat1(int a){
    cout<<"���� # "<<a<<"\n";
}

int repeat2(){
    cout<<"\n�����ϼ��� (1-4) �Ǵ� 0�� �Է��Ͽ� �ǳʶٱ� : ";
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
    cout<<"�ѱ��� ������ ����Դϱ�?\n";
    cout<<"1. ����\n";
    cout<<"2. �λ�\n";
    cout<<"3. ��õ\n";
    cout<<"4. �뱸\n";
}

void question2(){
    cout<<"�ѱ��� ��ȭ�� �����Դϱ�??\n";
    cout<<"1.���\n";
    cout<<"2.����\n";
    cout<<"3.����ȭ\n";
    cout<<"4.���޷�\n";
}

void question3(){
    cout<<"�ѱ��� ���� ���� '��ġ'�� � ���� ��������ϱ�?\n";
    cout<<"1.����\n";
    cout<<"2.����\n";
    cout<<"3.����\n";
    cout<<"4.���\n";
}

void question4(){
    cout<<"�ѱ��� ��ǥ���� ������ 'ö�� ������'�� ��� ������ ��������?\n";
    cout<<"1.��\n";
    cout<<"2.����\n";
    cout<<"3.����\n";
    cout<<"4.�ܿ�\n";
}

void question5(){
    cout<<"�ѱ��� �ְ� ���� ���� �����Դϱ�?\n";
    cout<<"1.�Ѷ��\n";
    cout<<"2.���ǻ�\n";
    cout<<"3.������\n";
    cout<<"4.�����\n";
}

void question6(){
    cout<<"�ѱ��� ������ �ұ������� '�溹��'�� ��� ���ÿ� �ֽ��ϱ�?\n";
    cout<<"1.�λ�\n";
    cout<<"2.����\n";
    cout<<"3.�뱸\n";
    cout<<"4.����\n";
}


int main(){
    int answer1, answer2, answer3, answer4, answer5, answer6;
    string ans1, ans2, ans3, ans4, ans5, ans6;

// 1�� ����
    repeat1(1);
    question1();
    answer1 = repeat2();
    if (answer1 == 1){
        correct+=1;
        ans1 = "����";
    }
    else if (answer1 == 2)ans1 = "�λ�";
    else if (answer1 == 3)ans1 = "��õ";
    else if (answer1 == 4)ans1 = "�뱸";
    else if (answer1 == 0){
        ans1 = "0";
        pass+=1;
    }
    else ans1 = "�߸��� �Է��� ���Խ��ϴ�";
    repeat3();
// 2�� ����
    repeat1(2);
    question2();
    answer2 = repeat2();
    if (answer2 == 3){
        correct+=1;
        ans2 = "����ȭ";}
    else if (answer2 == 1)ans2 = "���";
    else if (answer2 == 2)ans2 = "����";
    else if (answer2 == 4)ans2 = "���޷�";
    else if (answer2 == 0){
        ans2 = "0";
        pass+=1;}
    else ans2 = "�߸��� �Է��� ���Խ��ϴ�";
    repeat3();
// 3�� ����
    repeat1(3);
    question3();
    answer3 = repeat2();
    if (answer3 == 3){
        correct+=1;
        ans3 = "����";
    }
    else if (answer3 == 1)ans3 = "����";
    else if (answer3 == 2)ans3 = "����";
    else if (answer3 == 4)ans3 = "���";
    else if (answer3 == 0){
        pass+=1;
        ans3 ="0";}
    else ans3 = "�߸��� �Է��� ���Խ��ϴ�";
    repeat3();
// 4�� ����
    repeat1(4);
    question4();
    answer4 = repeat2();
    if (answer4 == 3){
        correct+=1;
        ans4 = "����";
    }
    else if (answer4 == 1)ans4 = "��";
    else if (answer4 == 2)ans4 = "����";
    else if (answer4 == 4)ans4 = "�ܿ�";
    else if (answer4 == 0){
        ans4 = "0";
        pass+=1;}
    else ans4 = "�߸��� �Է��� ���Խ��ϴ�";
    repeat3();
// 5�� ����
    repeat1(5);
    question5();
    answer5 = repeat2();
    if (answer5 == 1){
        correct+=1;
        ans5 = "�Ѷ��";
    }
    else if (answer5 == 2)ans5 = "���ǻ�";
    else if (answer5 == 3)ans5 = "������";
    else if (answer5 == 4)ans5 = "�����";
    else if (answer5 == 0){
        pass+=1;
        ans5 = "0";}
    else ans5 = "�߸��� �Է��� ���Խ��ϴ�";
    repeat3();
// 6�� ����
    repeat1(6);
    question6();
    answer6 = repeat2();
    if (answer6 == 2){
        correct+=1;
        ans6 = "����";
    }
    else if (answer6 == 1)ans6 = "�λ�";
    else if (answer6 == 3)ans6 = "�뱸";
    else if (answer6 == 4)ans6 = "����";
    else if (answer6 == 0){
        pass+=1;
        ans6="0";}
    else ans6 = "�߸��� �Է��� ���Խ��ϴ�";
    repeat3();

// ������ Ȯ��
    cout<<"\n======= ======= ======= =======\n";
    cout<<"\n======= ���� ��� =======\n";
    cout<<"\n======= ======= ======= =======\n";

    // 1�� ����
    repeat1(1);
    question1();
    cout<<"������ �� : "<<ans1<<"\n";
    cout<<"���� : ����\n";
    cout<<"\n����Ϸ��� �ƹ�Ű�� ��������...";
    int garbage;
    cin>>garbage;
    cout<<"\n";
    repeat3();
// 2�� ����
    repeat1(2);
    question2();
    cout<<"������ �� : "<<ans2<<"\n";
    cout<<"���� : ����ȭ\n";
    cout<<"\n����Ϸ��� �ƹ�Ű�� ��������...";
    cin>>garbage;
    cout<<"\n";
    repeat3();
// 3�� ����
    repeat1(3);
    question3();
    cout<<"������ �� : "<<ans3<<"\n";
    cout<<"���� : ����\n";
    cout<<"\n����Ϸ��� �ƹ�Ű�� ��������...";
    cin>>garbage;
    cout<<"\n";
    repeat3();
// 4�� ����
    repeat1(4);
    question4();
    cout<<"������ �� : "<<ans4<<"\n";
    cout<<"���� : ����\n";
    cout<<"\n����Ϸ��� �ƹ�Ű�� ��������...";
    cin>>garbage;
    cout<<"\n";
    repeat3();
// 5�� ����
    repeat1(5);
    question5();
    cout<<"������ �� : "<<ans5<<"\n";
    cout<<"���� : �Ѷ��\n";
    cout<<"\n����Ϸ��� �ƹ�Ű�� ��������...";
    cin>>garbage;
    cout<<"\n";
    repeat3();
// 6�� ����
    repeat1(6);
    question6();
    cout<<"������ �� : "<<ans6<<"\n";
    cout<<"���� : ����\n";
    cout<<"\n����Ϸ��� �ƹ�Ű�� ��������...";
    cin>>garbage;
    cout<<"\n";
    repeat3();

// ���
    cout<<"\n\n======= ======= ======= =======\n";
    cout<<"=======      ���     =======\n";
    cout<<"======= ======= ======= =======\n";
    cout<<"�� ���� �� : 6\n";
    cout <<"���� : "<<correct<<"\n";
    cout<<"���� : "<<6-correct<<"\n";
    cout<<"�ǳʶ� ���� : "<<pass<<"\n";


    return 0;
}