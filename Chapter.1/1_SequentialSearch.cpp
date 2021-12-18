#pragma warning(disable:4996)
#include <iostream>
#include <algorithm>

using namespace std;

/// <summary>
/// 순차 탐색 알고리즘
/// </summary>
/// <param name="A">값을 찾을 배열</param>
/// <param name="n">배열 요소의 수</param>
/// <param name="x">찾을 값</param>
/// <returns>찾은 값의 인덱스, 값을 찾지 못한 경우 -1을 리턴</returns>
int SequentialSearch(int A[], int n, int x) {
    for (int i = 0; i < n; ++i) {
        if (x == A[i]) return i;
    }
    return -1;
}

int main() {
    int _array[] = {1, 2, 3, 4, 5};
    for (int i = 1; i <= 6; i++) {
        int searchResult = SequentialSearch(_array, 5, i);
        if (searchResult != -1) {
            printf("값 %d는(은) %d번 인덱스에 위치하고 있습니다!\n", i, searchResult);
        }
        else {
            printf("값 %d를(을) 찾지 못하였습니다!\n", i);
        }
    }
    return 0;
}