#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <set>
#include <vector>

using namespace std;

//set �̵� map �̵� find �ÿ� ���� �� ���� ���ٸ�
//�ش� end �����ڸ� ��ȯ�Ѵ�.
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	set <int> first;
	set <int> second;
	vector <int> a;
	vector <int> b;
	int num1, num2;

	cin >> num1 >> num2;

	while (num1--) {
		int x;
		cin >> x;
		a.push_back(x);
		first.insert(x);
	}
	while (num2--) {
		int x;
		cin >> x;
		b.push_back(x);
		second.insert(x);
	}
	num1=0, num2=0;
	for (int i = 0; i < b.size(); i++) {
		if (first.find(b[i]) != first.end()) // ����� �ٸ��ٸ�?
			num1++;
		//�̹� �����ϰ��ִٴ¶�
	}
	for (int i = 0; i < a.size(); i++) {
		if (second.find(a[i]) != second.end()) // ����� �ٸ��ٸ�?
			num2++;
		//�̹� �����ϰ��ִٴ¶�
	}
	int answer = a.size() + b.size() - num1 - num2;
	cout << answer<< "\n";
	return 0;
}
