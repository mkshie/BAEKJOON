#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, answer, min;
	min = 9999;
	answer = -1;
	cin >> N;
	int x, y; // x �� �� y �� ������
	x = N / 5;
	y = N % 5;
	// ���ڵ��� 5�� �������� ���� ������ �������Ŷ��??
	int num1 = N - (5 * x);
	int x1, y1; // �� , ������
	x1 = num1 / 3;
	y1 = num1 % 3;
	while (1) {
		if (y == 0 || y1 == 0)// ���� �������� �Ѵ� 0�̶�� ���������
		{
			if (x + x1 < min) min = x + x1; //�ּڰ� ������ ��ü
		}
		if (x1 == N / 3) {
			if (min < 9999)
				answer = min;
			break;
		}
		x--;
		num1 = N - (5 * x);
		x1 = num1 / 3;
		y1 = num1 % 3;
	}
	cout << answer << "\n";

	return 0;
}