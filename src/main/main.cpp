#include "statistics.hpp"
#include <iostream>
#include <iomanip>

int main() {
    float data[] = {4.0f, 2.0f, 3.0f, 5.0f, 6.0f, 1.0f};
// Die folgende Zeile sorgt dafür, dass eine 3,0 mit einer Nachkommastelle ausgegeben wird.
// The following line makes sure we will print a 3.0 with one decimal.
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Das Array wurde mit den Werten [4.0f, 2.0f, 3.0f, 5.0f, 6.0f, 1.0f] initialisiert." << std::endl;
    std::cout << "The Array was initialized using the values [4.0f, 2.0f, 3.0f, 5.0f, 6.0f, 1.0f] initialisiert."
              << std::endl;
    std::cout << "Das Minimum ist (erwartet 1.0): " << min(data, 6) << std::endl;
    std::cout << "The minimum is (expected 1.0): " << min(data, 6) << std::endl;
    std::cout << std::endl;
    std::cout << "Das Maximum ist (erwartet 6.0): " << max(data, 6) << std::endl;
    std::cout << "The maximum is (expected 6.0): " << max(data, 6) << std::endl;
    std::cout << std::endl;
    std::cout << "Der Durchschnitt ist (erwartet 3.5): " << average(data, 6) << std::endl;
    std::cout << "The average is (expected 3.5): " << average(data, 6) << std::endl;
    std::cout << std::endl;
    std::cout << "Der Median ist (erwartet 4.0): " << median(data, 6) << std::endl;
    std::cout << "The median is (expected 4.0): " << median(data, 6) << std::endl;
    std::cout << std::endl;
    std::cout << "Die Varianz ist (erwartet 2.9): " << variance(data, 6) << std::endl;
    std::cout << "The variance is (expected 2.9): " << variance(data, 6) << std::endl;
    std::cout << std::endl;
    return 0;
}