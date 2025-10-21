// FizzBuzz
#include <iostream>

void fizzBuzz(int n){
    // Será múltiplo quando o resto da divisão de i por 3/5 for 0;
    for (size_t i {1}; i <= n; i++){
        if (i%3 == 0 && i%5 == 0)
            std::cout << "FizzBuzz";
        else if (i%3 == 0)
            std::cout << "Fizz";
        else if (i%5 == 0)
            std::cout << "Buzz";
        else std::cout << i;
        if (i < n) std::cout << "\n";
    }
}

// Função principal;
int main(){
    int n{}; // Quantos números tem a sequência;
    std::cout << "Enter a positive integer: " << std::flush;
    std::cin >> n;
    
    fizzBuzz(n);   
    std::cout << std::endl << std::flush;
    return 0;
}

