#include "deposit.h"


int main()
{
	int d, x, s;


    cout << "������� ������ ������ (������� 1000): ";
	cin >> x;
    if(!verifyDeposit(x)) {		
		cout << "������ ������ �� ������ ���� ������ 1000" << endl;
		return 1;
	}

	cout << "������� ���� ������ (�� ����� 365 ����): ";
	cin >> d;
	if(verifyDays(d)) {
	
		cout << "���� ������ ���� �� ����� 365 ����" << endl;
		return 1;
	}
	s= calculateDohod(x, d, s);

	cout << "�����\n" << s << endl;

	return 0;
}
