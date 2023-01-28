//przyjmij dwie liczby N i K, a następnie wypisz czy N jest podzielne przez K. Nie chcemy dzielić przez 0

#include <iostream>

int main (){
    
    int N = 0;
    int K = 0;
    std::cin >> N >> K;
    std::cout <<"Wynik dzielenia : ";
    
    if ( K !=0)
    std::cout << N / K;
    
    
    else 
        
    std::cout << "Nie ma dzielenia przez ZERO";
  
    
        
}
