//�����ڸ� �̿��� ���ڷ� ������ int�� �������� 1�� �����ϴ� �Լ�
//�����ڸ� �̿��� ���ڷ� ������ int �� ������ ��ȣ�� �ٲٴ� �Լ�
//������ num�� �ּҰ��� ������ ������ ������ �� ������ ������ �����ϴ� �����ڸ� �����ϰ� �� �����ͺ����� �����ڸ� �̿��� num�� ����� ���� ����϶�
//const int num = 12;
//
//���̸� �Ű������� �޾Ƽ� �ش� ������ ���ڿ��� ������ �� �ִ� �迭�� �����ϰ� �� �ּҰ��� ��ȯ�ϴ� �Լ��� ����� �̸� �׽�Ʈ�ϴ� �ڵ带 �ۼ��϶�.
//
//������ ���� Point ����ü�� �����ϰ� �̸� �Ű������� �ϴ� pntAdder �Լ��� �����϶�.PntAdder�Լ��� �Ű������� ���� ���� �� �� ���� x��ǥ���� ����, y��ǥ ���� ���� �������� ���ο� Point�� �ʱ�ȭ�ؼ� ��ȯ�ϴ� �Լ��̴�.�� �� Point ����ü ������ new �����ڸ� �̿��ؾ��Ѵ�.
#include<iostream>
using namespace std;

//�����ڸ� �̿��� ���ڷ� ������ int�� �������� 1�� �����ϴ� �Լ�
void increVal(int& val) {
	val++;
}

//�����ڸ� �̿��� ���ڷ� ������ int �� ������ ��ȣ�� �ٲٴ� �Լ�
void convVal(int& val) {
	val = -val;
}

void test_incre_conv() {

	int num = 1;

	increVal(num);
	cout << num << endl;

	convVal(num);
	cout << num << endl;
}

//������ num�� �ּҰ��� ������ ������ ������ �� ������ ������ �����ϴ� �����ڸ� �����ϰ� 
//�� �����ͺ����� �����ڸ� �̿��� num�� ����� ���� ����϶�
//const int num = 12;
void func1_9_2_3() {

	const int num = 12;
	const int* ptr = &num;
	const int*& ref = ptr;

	cout << *ptr << endl;
	cout << *ref << endl;

}

//���̸� �Ű������� �޾Ƽ� �ش� ������ ���ڿ��� ������ �� �ִ� �迭�� �����ϰ� �� �ּҰ��� ��ȯ�ϴ� �Լ��� ����� �̸� �׽�Ʈ�ϴ� �ڵ带 �ۼ��϶�.
char* newMem(int len) {

	return  new char[len + 1];
}
void func1_9_2_4() {

	int len;

	cout << "������ �迭�� ũ�⸦ �Է��ϼ���" << endl;
	cin >> len;

	char* ptr = newMem(len);
	cin >> ptr;
	cout << "�Է��� ���ڿ�:" << ptr << endl;

	delete[]ptr;
}

//������ ���� Point ����ü�� �����ϰ� �̸� �Ű������� �ϴ� pntAdder �Լ��� �����϶�. 
//�� �� ���� ���������� pntAddr�� �׽�Ʈ �ڵ带 �ۼ��϶�. 
//�� �� Point ����ü ������ new �����ڸ� �̿��ؾ��Ѵ�.

typedef struct {
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2) {

	Point* ptr = new Point;

	ptr->xpos = p1.xpos + p2.xpos;
	ptr->ypos = p1.ypos + p2.ypos;
	return *ptr;
}

void func5() {
	Point* ptr1 = new Point;
	ptr1->xpos = 10;
	ptr1->ypos = 20;
	Point* ptr2 = new Point;
	ptr2->xpos = 5;
	ptr2->ypos = 15;

	Point& ref = PntAdder(*ptr1, *ptr2);
	cout << ref.xpos << ", " << ref.ypos << endl;

	delete ptr1;
	delete ptr2;
	delete& ref;

}
