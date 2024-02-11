#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str1, bomb;
	cin >> str1 >> bomb;
	int bomblen = (int)bomb.size();
	bool flag = true;
	vector <char> str2;
	for (size_t i = 0; i < str1.size(); i++) { //i �� str1 ����Ű�� idx ��
		str2.push_back(str1[i]);
		if (str2.size() >= bomblen) {  // str2 �� ���̰� �� ��ٸ� ��ź ���ڿ� Ȯ���غ���
			if (str2[str2.size() - 1] == bomb[bomblen - 1]) { // �� ������ ���ڿ� Ȯ���ϱ�
				flag = false;
				for (size_t k = 1; k < bomblen; k++) {
					if (str2[str2.size() - 1 - k] != bomb[bomblen - 1 - k]) { // �� ���� ���� Ȯ���غ���
						flag = true; // ���� ��ź���ڿ��� �ٸ��ٸ� �׳� ����������
						k = bomblen;
					}
				}
				if (flag == false) {
					for (size_t p = 0; p < bomblen; p++) { // ���� flag �� ��� false ��� ���ڿ� ���ֱ�
						str2.pop_back();
					}
				}
			}
		}
		flag = true; // Ȯ���� �ٽ� ������ ���ؼ� 
	}
	if (str2.size() == 0)
		cout << "FRULA";
	else {
		for (size_t i = 0; i < str2.size(); i++) {
			cout << str2[i];
		}
	}
	return 0;
}