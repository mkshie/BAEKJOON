#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a[100002] = {};

	long long K, N,answer =1;
	cin >> K >> N;
	long long p = 0;

	long long hop = 0;
	for (int i = 0; i < K; i++) {
		cin >> p;
		a[i] = p;
		hop += p;
	}
	long long count = hop / N;
	long long sum = 0;
	long long start = 1;
	long long key;
	while (start+1 !=count &&start != count) {
		sum = 0;
		key = (start + count) / 2;
		for (int test = 0; test < K; test++) {
			sum += a[test] / key;
		}
		if (N <= sum)
		{
			start = key;

		}
		else {
			count = key;

		}
		answer = start;

	}

	int tmp = 0;
	for (int test = 0; test < K; test++) {
		tmp += a[test] / (answer+1);
	}
	if (tmp >= N) {
		answer++;
	}


	cout << answer;
	return 0;
}