//Wypisz liczby całkowite od 1 do 100, ale:
// - Zamiast podzielnych przez 3 wypisz "Hopsasa"
// - Zamiast podzielnych przez 5 wypisz "Tralala"
// - Zamiast podzielnych przez 3 i przez 5 wypisz "HopsasaTralala" (to również wynika z ////powyższych zasad).
//Początek wyniku tego programu powinien wyglądać tak:
//1
//2
//Hopsasa
//4
//Tralala
//Hopsasa
//7
//8
//Hopsasa
//Tralala
//11
//Hopsasa
//13
//14
//HopsasaTralala
//16

#include <iostream>

int main(){
 
    for (int i=1; i <= 100; i++) {
        std::cout << i << "\n";
    
        if(i%3==0)
        std::cout << "Hopsasa" << "\n";
        
        if(i%5==0)
        std::cout << "Tralala" << "\n";
        
        if(i%3==0 && i%5==0)
        std::cout << "HopsasaTralala" << "\n";    
    }
}
