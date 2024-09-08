#include <iostream>
#include <vector>
#include <algorithm> // 包含 std::sort

int findMedian(std::vector<int>& data) {
    std::sort(data.begin(), data.end()); // 对数据进行排序

    size_t n = data.size(); // 数据大小
    if (n % 2 == 0) { // 如果元素个数是偶数
        // 返回中间两个数的平均值
        return (data[n / 2 - 1] + data[n / 2]) / 2;
    } else { // 如果元素个数是奇数
        // 返回中间的数
        return data[n / 2];
    }
}

int main() {
    std::vector<int> vec = {3, 1, 4, 1, 5, 9, 2};

    int median = findMedian(vec);

    std::cout << "Median: " << median << std::endl;

    return 0;
}
