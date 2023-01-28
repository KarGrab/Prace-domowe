//Przyjmij liczbę N, a następnie wypisz jej cyfry w jednym wierszu (w dowolnej kolejności), //rozdzielone przecinkami.
//Zadbaj, aby nie było "wiszącego" przecinka na końcu wiersza (tzn. dla 123 chcemy wypisać //"3,2,1", a nie "3,2,1,").

#include <iostream>

int main (){
    
    int N = 0;
    std::cin >> N;
    
    if (N < 0)
        N = -N;
    
    while (N > 10){
        std::cout << N % 10 << ",";
        N /= 10; 
        
        
}

        
}
