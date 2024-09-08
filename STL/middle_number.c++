#include <iostream>
#include <vector>
#include <algorithm> // ���� std::sort

int findMedian(std::vector<int>& data) {
    std::sort(data.begin(), data.end()); // �����ݽ�������

    size_t n = data.size(); // ���ݴ�С
    if (n % 2 == 0) { // ���Ԫ�ظ�����ż��
        // �����м���������ƽ��ֵ
        return (data[n / 2 - 1] + data[n / 2]) / 2;
    } else { // ���Ԫ�ظ���������
        // �����м����
        return data[n / 2];
    }
}

int main() {
    std::vector<int> vec = {3, 1, 4, 1, 5, 9, 2};

    int median = findMedian(vec);

    std::cout << "Median: " << median << std::endl;

    return 0;
}
