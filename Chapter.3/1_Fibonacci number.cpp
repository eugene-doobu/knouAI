#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;
#define ll long long

ll fibo[100];

/// <summary>
/// �Ǻ���ġ ���� �˰���(top-down)
/// �ð����⵵ O(n)
/// </summary>
/// <param name="n">���Ϸ��� �Ǻ���ġ ������ ����</param>
/// <returns>�Ǻ���ġ ������ n��° ��</returns>
ll Fibo(int n) {
	if (n <= 1) return 1;
	ll& ret = fibo[n];
	if (ret != -1) return ret;
	return ret = Fibo(n - 1) + Fibo(n - 2);
}

int main() {
	fastio;
	int n; cin >> n;
	memset(fibo, -1, sizeof fibo);
	cout << Fibo(n) << '\n';

	memset(fibo, -1, sizeof fibo);
	fibo[0] = 1; fibo[1] = 1;
	// �Ǻ���ġ ���� �˰���(bottom-up)
	for (int i = 2; i <= n; ++i)
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	cout << fibo[n];
}