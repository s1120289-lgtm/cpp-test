#include <iostream>
 int main() {
 int year = 2025;                  
  double price = 10.99;             
  double gpa = 2.5, temperature = 25.1; 
  std::cout << "year=" << year << "\n";
  std::cout << "price=" << price << "\n";
   std::cout << "gpa=" << gpa << ", temp=" << temperature << "\n";
   return 0;
}
   #include <iostream>

int main() {
    double celsius;
    double fahrenheit;

    std::cout << "請輸入華氏溫度!\n";
    std::cin >> fahrenheit;

    celsius = (fahrenheit - 32) / 9 * 5;

    std::cout << "攝氏溫度為: " << celsius << " 度\n";
    
    return 0;
}