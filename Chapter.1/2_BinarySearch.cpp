#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

/// <summary>
/// 이진 탐색 알고리즘
/// </summary>
/// <param name="A">탐색 대상 배열. 오름차순으로 정렬되어 있다고 가정</param>
/// <param name="left">A에서 x를 찾는 구간의 왼쪽</param>
/// <param name="right">A에서 x를 찾는 구간의 오른쪽</param>
/// <param name="x">찾을 값(탐색 키)</param>
/// <returns>x가 위치한 인덱스, 없는경우 -1</returns>
int BinarySearch(int A[], int left, int right, int x) {
    if (left > right) return -1;

    // 의미상 명확하게 하기 위해 바닥함수 사용
    int mid = floor((left + right) / 2); 

    if (x == A[mid]) return mid;
    else if (x < A[mid]) BinarySearch(A, left, mid - 1, x);
    else BinarySearch(A, mid + 1, right, x);
}

int BinarySearch(int A[], int size, int x) {
    return BinarySearch(A, 0, size, x);
}

int main() {
    int a[] = { 2, 3, 5, 6, 8, 9, 1, 43, 26, 787, 343, 34, 65, 3 };
    std::sort(a, a + 14);

    std::cout << "정렬된 원소: ";
    for (int i = 0; i < 14; ++i)
        std::cout << a[i] << " ";
    std::cout << std::endl;

    std::cout << "숫자 1은 "  << BinarySearch(a, 14, 1)  << "번 인덱스에 있습니다." << std::endl;
    std::cout << "숫자 43은 " << BinarySearch(a, 14, 43) << "번 인덱스에 있습니다." << std::endl;
    return 0;
}