#include <iostream>

// int add_two_values(int a, int b) {
//     return a + b;
// }

// float add_two_values(float a, float b) {
//     return a + b;
// }

template<typename T>
T add_two_values(T a, T b) {
    return a + b;
}

int main() {
    std::cout << add_two_values(1, 5) << std::endl;
    std::cout << add_two_values(1.5f, 5.25f) << std::endl;
}
