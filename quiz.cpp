#include <iostream>
#include <clocale>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");

	string name, surname;
	char choice;

	cout << "������� ���� ��� � ������� (���������� �� ���������� �����)" << endl;
	cin >> name >> surname;
	cout << name << "," << " " << "����� ���������� � ���� '��� ����� ����� �����������'!" << endl;

	cout << "������ ������ �� 500 ������!" << endl;
	cout << "������� ���� � ����� ���������?" << endl;
	cout << "�������� ������" << endl;
	cout << "A) 256" << endl;
	cout << "B) 8" << endl;
	cout << "C) 1024" << endl;
	cout << "D) 64" << endl;
	cout << "��� �����: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "��� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "��� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "�����������, �� �������� 500 ������!" << endl;
		Sleep(3000);    //�������� � 3000 ����������� (3 �������)
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "��� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "�� ����� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "����, ������ �� 1500 ������!" << endl;
	cout << "������� ����������� ���������� ���� �������� ����� ���������?" << endl;
	cout << "A) 10 ��" << endl;
	cout << "B) 100 ��" << endl;
	cout << "C) 1000 ��" << endl;
	cout << "D) 10000 ��" << endl;
	cout << "��� �����: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "��� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "�����������, �� �������� 1500 ������!" << endl;
		Sleep(3000);    //�������� � 3000 ����������� (3 �������)
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "��� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "��� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "�� ����� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "��������, � ������ ������ �� 3000 ������!" << endl;
	cout << "����� ������� � ������� � ���������� 64, ��� ��� �� �����?" << endl;
	cout << "A) 8" << endl;
	cout << "B) 12" << endl;
	cout << "C) 4" << endl;
	cout << "D) 6" << endl;
	cout << "��� �����: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "��� ���������� �����, �� �������� 3000 ������!" << endl;
		Sleep(3000);    //�������� � 3000 ����������� (3 �������)
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "��� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "��� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "��� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "�� ����� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "4 ������ �� 5.000 ������!" << endl;
	cout << "�� ������ ���: �������� ���� ������ ������� �����" << endl;
	cout << "A) 1914 - 1919" << endl;
	cout << "B) 1939 - 1945" << endl;
	cout << "C) 1944 - 1945" << endl;
	cout << "D) 1940 - 1950" << endl;
	cout << "��� �����: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "��� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "����������! ��� ���������� �����, �� ����������� 5.000 ������!" << endl;
		Sleep(3000);    //�������� � 3000 ����������� (3 �������)
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "��� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "��� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "�� ����� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "�������! �� ����� �� 5-�� �������!" << endl;
	cout << "�� ������ �������� 10.000 ������!" << endl;
	cout << "������: ������ ���� ������ ����� �� �����?" << endl;
	cout << "A) ��������" << endl;
	cout << "B) �����" << endl;
	cout << "C) ���������� ���" << endl;
	cout << "D) ����" << endl;
	cout << "��� �����: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "��� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "��� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "��� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "�� ��������� ����� � ����������� 10.000 ������!" << endl;
		Sleep(3000);    //�������� � 3000 ����������� (3 �������)
	}
	else {
		cout << "�� ����� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "������� ����� ������� ��������" << endl;
	cout << "�� ���������� ����� �� �������� 20.000 ������!" << endl;
	cout << "������: ����� ������ �������� '������ �������' �������?" << endl;
	cout << "A) �������" << endl;
	cout << "B) �������" << endl;
	cout << "C) ������" << endl;
	cout << "D) ������" << endl;
	cout << "��� �����: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "����������, �� ��������� 20.000 ������!" << endl;
		Sleep(3000);    //�������� � 3000 ����������� (3 �������)
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "���, �� ���������� ����� : �������!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "���, �� ���������� ����� : �������!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "���, �� ���������� ����� : �������!" << endl;
		cin.get(); cin.get();
	}
	else {
		cout << "�� ����� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "�� �������� ����� ��������� �����, � ���� �������" << endl;
	cout << "��������� ���������� Intel Core, ������ �������� �� ������ ����!" << endl;
	Sleep(3000);    //�������� � 3000 ����������� (3 �������)

	cout << "���� ������������!" << endl;
	cout << "�� ������ �������� 30.000 ������, ������� �� ��������� ������!" << endl;
	cout << "������ ������ ��������� �������: �� ����� ����� ���� ������ ��������� �����?" << endl;
	cout << "A) �� 15 �����" << endl;
	cout << "B) �� 5 �����" << endl;
	cout << "C) �� 8 �����" << endl;
	cout << "D) �� 17 �����" << endl;
	cout << "��� �����: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "���, �� ���������� ����� : �� 8 �����" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "���, �� ���������� ����� : �� 8 �����" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "��, �� �������� ����� � ��������� 30.000 ������!" << endl;
		Sleep(3000);    //�������� � 3000 ����������� (3 �������)
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "���, �� ���������� ����� : �� 8 �����" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "�� ����� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "��������: ������ �� 50.000 ������!" << endl;
	cout << "������: ����� �������� ����� � ������ ��� -" << endl;
	cout << "A) ������-���������� �����" << endl;
	cout << "B) ���������� �������" << endl;
	cout << "C) ����� �����" << endl;
	cout << "D) ������� ��������" << endl;
	cout << "��� �����: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "����, ��� ������������ �����" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "���, ���������, ��������� 50.000 ������!" << endl;
		Sleep(3000);    //�������� � 3000 ����������� (3 �������)
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "����, ��� ������������ �����" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "����, ��� ������������ �����" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "�� ����� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "���� �� ����� �� ����� �����, ������ �� ����������" << endl;
	cout << "�� ������ �������� ����� 100.000 ������, ������� �� ������ ������!" << endl;
	cout << "����: �������� ��������� 2 � ����� ������" << endl;
	cout << "A) ������ � ������" << endl;
	cout << "B) ������ � ����� ��������" << endl;
	cout << "C) ������ � �������� ��������" << endl;
	cout << "D) �������� �������� � ������" << endl;
	cout << "��� �����: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "����, ��� ������������ �����" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "����, ��� ������������ �����" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "���, �� ������� ��������, ���� ����� ������� �������!" << endl;
		cout << "��� ������� ���������� 100.000 ������!" << endl;
		Sleep(3000);    //�������� � 3000 ����������� (3 �������)
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "����, ��� ������������ �����" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "�� ����� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "����������, �� ������ ����� ������" << endl;
	cout << "����, ������ �10 �� 250.000 ������!" << endl;
	cout << "�����, ��������� ���������, ������� �������� ����� ������� ���������" << endl;
	cout << "A) ��������� �����" << endl;
	cout << "B) ����������� �����" << endl;
	cout << "C) ���������� �����" << endl;
	cout << "D) ���� �����" << endl;
	cout << "��� �����: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "�� �����������((((" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "�� �����������((((" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "�� �����������((((" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "����������, �������." << endl;
		cout << "����: 250.000 ������" << endl;
		Sleep(3000);    //�������� � 3000 ����������� (3 �������)
	}
	else {
		cout << "�� ����� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "11 ������ �� 500.000 ������: ���� �� �������� �����1 ��������� ����� ������� (���������)?" << endl;
	cout << "�������� ������" << endl;
	cout << "A) �����" << endl;
	cout << "B) ����" << endl;
	cout << "C) ���" << endl;
	cout << "D) ���������" << endl;
	cout << "��� �����: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "�� ���������, �������� � ��������� ���" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "�� ���������, �������� � ��������� ���" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "�������, �����! 500.000 ������ ����!" << endl;
		Sleep(3000);    //�������� � 3000 ����������� (3 �������)
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "�� ���������, �������� � ��������� ���" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "�� ����� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "��� ������� ��� ���-�� ������ �����������?" << endl;
	cout << "���������� � ������� �12 �� 1.000.000 ������" << endl;
	cout << "� ����� ���� ������� ����� ��������� ������� '�������'?" << endl;
	cout << "A) � 1806 ����" << endl;
	cout << "B) � 1815 ����" << endl;
	cout << "C) � 1878 ����" << endl;
	cout << "D) � 1912 ����" << endl;
	cout << "��� �����: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "�� ��, ����� �� 1.000.000 ��������" << endl;
		cout << "������ � ������ ���" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "�� ��, ����� �� 1.000.000 ��������" << endl;
		cout << "������ � ������ ���" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "�� ��, ����� �� 1.000.000 ��������" << endl;
		cout << "������ � ������ ���" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "������ ������, 1.000.000 ������ � ���" << endl;
		Sleep(3000);    //�������� � 3000 ����������� (3 �������)
	}
	else {
		cout << "�� ����� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "�������� 3 �������" << endl;
	cout << "����, 13 ������ �� LADA 2107" << endl;
	cout << "������ ������ ���: ����� ������ ��� �� ��������� �����?" << endl;
	cout << "A) k6" << endl;
	cout << "B) h8" << endl;
	cout << "C) g5" << endl;
	cout << "D) b7" << endl;
	cout << "��� �����: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "��� ���������� �����!!!" << endl;
		cout << "�� ��������� LADA 2107" << endl;
		Sleep(3000);    //�������� � 3000 ����������� (3 �������)
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "���, ��� ������������ �����, ����� �� �������� ������" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "���, ��� ������������ �����, ����� �� �������� ������" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "���, ��� ������������ �����, ����� �� �������� ������" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "�� ����� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "�� ����� ��������� �� ������� ����" << endl;
	cout << "��� ���� �� 14 ������ - ����� �� LADA 2107" << endl;
	cout << "���, ����� ������ ���� ������� ���� �������� ����� ������ � ������?" << endl;
	cout << "A) ������� ������" << endl;
	cout << "B) �� ������" << endl;
	cout << "C) �� �������� �������� ������" << endl;
	cout << "D) �� �������� ��������" << endl;
	cout << "��� �����: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "��� ��������� ������" << endl;
		cout << "������������ ������)" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "��� ��������� ������" << endl;
		cout << "������������ ������)" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "����������, �� ������� �������" << endl;
		cout << "��� ���� ����� �� LADA 2107)" << endl;
		Sleep(3000);    //�������� � 3000 ����������� (3 �������)
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "��� ��������� ������" << endl;
		cout << "������������ ������)" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "�� ����� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}

	cout << "��������� ������ �� ���� �� LADA 2107" << endl;
	cout << "������ �15: ����� �� ��������� ������� ������ ����� ����������?" << endl;
	cout << "A) Chanel" << endl;
	cout << "B) Gucci" << endl;
	cout << "C) Barberry" << endl;
	cout << "D) Louis Vuitton" << endl;
	cout << "��� �����: ";
	cin >> choice;
	if (choice == 'a' || choice == 'A') {
		cout << "�� ���� ��� ������, ��� ������� ���������� 0 ������(" << endl;
		cout << "��� ��������� ������" << endl;
		cout << "������������ ������)" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'b' || choice == 'B') {
		cout << "!!!!����, �� ��������, ��� ���� �����������!!!!" << endl;
		cout << "��� ���� ���������� 1.000.000 ������ � ��������� LADA 2107" << endl;
		cout << "���� ��� ����� �������� � ������� ������" << endl;
		cout << "�����������!!!" << endl;
		cout << "�����������!!!" << endl;
		cout << "�����������!!!" << endl;
		cout << "������� ����������� ����:" << endl;
		cout << "1: " << name << " " << surname << endl;
		cout << "2: " << "���� ����������" << endl;
		cout << "3: " << "���� ����������" << endl;
		cout << "4: " << "���� ����������" << endl;
		cout << "5: " << "���� ����������" << endl;
		cout << "6: " << "���� ����������" << endl;
		cout << "7: " << "���� ����������" << endl;
		cout << "8: " << "���� ����������" << endl;
		cout << "9: " << "���� ����������" << endl;
		cout << "10: " << "Albert Einstein" << endl;
		cout << "11: " << "Cristiano Ronaldo 7" << endl;
	}
	else if (choice == 'c' || choice == 'C') {
		cout << "�� ���� ��� ������, ��� ������� ���������� 0 ������(" << endl;
		cout << "��� ��������� ������" << endl;
		cout << "������������ ������)" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else if (choice == 'd' || choice == 'D') {
		cout << "�� ���� ��� ������, ��� ������� ���������� 0 ������(" << endl;
		cout << "��� ��������� ������" << endl;
		cout << "������������ ������)" << endl;
		cin.get(); cin.get();
		return 0;
	}
	else {
		cout << "�� ����� ������������ �����!" << endl;
		cin.get(); cin.get();
		return 0;
	}
	cin.get(); cin.get();
	return 0;
}