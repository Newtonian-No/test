#include <iostream>
#include <vector>
#include <string>

std::vector<char> vec;

bool compare(int n) {
    if (n < 0 || n >= vec.size()) {
        return false; // n 超出范围
    }

    std::vector<char>::iterator it = vec.begin();
    std::advance(it, n);

    int flag = 0;

    if (*it == '[') {
        while (it != vec.end()) {
            if (*it == '[') {
                flag = 0;
                ++it;
                continue;
            }
            if (*it == ']') {
                flag = 1;
                it = vec.erase(it); // 使用 erase 删除元素
                break;
            }
            ++it;
        }
    } else if (*it == '{') {
        while (it != vec.end()) {
            if (*it == '{') {
                flag = 0;
                ++it;
                continue;
            }
            if (*it == '}') {
                flag = 1;
                it = vec.erase(it);
                break;
            }
            ++it;
        }
    } else if (*it == '(') {
        while (it != vec.end()) {
            if (*it == '(') {
                flag = 0;
                ++it;
                continue;
            }
            if (*it == ')') {
                flag = 1;
                it = vec.erase(it);
                break;
            }
            ++it;
        }
    }
    return flag;
}

int main() {
    int n, j = 0;
    std::string str;
    std::getline(std::cin, str);
    n = str.size();

    for (int i = 0; i < n; ++i) {
        vec.push_back(str[i]);
    }

    while (true) {
        bool flag = compare(j);
        if (!flag) {
            std::cout << "False" << std::endl;
            break;
        }
        ++j;
        if (j >= n) {
            std::cout << "True" << std::endl;
            break;
        }
    }

    return 0;
}