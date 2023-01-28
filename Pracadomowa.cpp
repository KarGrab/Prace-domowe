#include <iostream>
// przyjmij 2 liczby całkowite oznaczające długosci boków przyprostokątnych potem wypisz jego pole
int main() {
    
    int a = 0;
    int h = 0;
    
    std::cout << "Podaj bok a trójkąta:";
    std::cin >> a;
    std::cout << "Podaj bok h trójkąta:";
    std::cin >> h;
   
    
//wzór na pole trójkąta prostokątnego a * h / 2
    
    std::cout << "Pole trójkąta" ":";
    std::cout << a * h / 2;
}
