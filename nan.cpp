#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Nhap vao so thu nhat: ";
    std::cin >> num1;
    std::cout << "Nhap vao so thu hai: ";
    std::cin >> num2;
    int sum = num1 + num2;
    std::cout << "Tong hai so la: " << sum << std::endl;
    return 0;
}
