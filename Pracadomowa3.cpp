//Przyjmij 3 liczby a b i c a nastepnie wypisz, czy da sie z dlugosci takich odcinkow zbudowac trojkat

#include <iostream>

int main (){
    
    int A = 0;
    int B = 0;
    int C = 0;
    
    std::cout << "Długość boku A : ";
    std::cin >> A;
    std::cout << "Długość boku B : ";
    std::cin >> B;
    std::cout << "Długość boku C : ";
    std::cin >> C;
    
    // a+b > c; a+c > b; b+c>a;
    
    if ( A + B > C) {
        std::cout << A << "+" << B << ">" << C << "=" << (A + B > C ) << "\n";
    }
        else {
            std::cout << "Nie ma opcji";
    }
        
        if ( A + C > B) {
        std::cout << A << "+" << C << ">" << B << "=" << (A + C > B ) << "\n";
    }
        else {
            std::cout << "Próbój dalej";
    }
        
        if ( B + C > A) {
        std::cout << B << "+" << C << ">" << A << "=" << (B + C > A ) << "\n";
    }
        else {
            std::cout << "Wróć";
    }
    
        if (A + B > C == A + C > B == B + C > A){
            std::cout << (A + B > C == A + C > B == B + C > A) << "\n";
            std::cout << " Mamy trójkąt ";
        }
    
    
        
        
        
    }
    
