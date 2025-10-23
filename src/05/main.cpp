// Factorial Sequence
#include <iostream>
#include <algorithm>
#include <vector>

// Função recursiva que calcula o fatorial de i;
int calculator(int i){
    if (i == 0){
        return 1;
    }
    else{
        return i * calculator(i-1);
    }
    
}

// Exibe o fatorial de cada entre 0 e n;
int print_factorials(int n){
    for (size_t i {}; i <= n; i++){
        std::cout << calculator(i) << "\n";
    }
    return 0;
}

// Função principal;
int main(){
    print_factorials(10);
    std::cout << std::endl << std::endl << std::flush;
    return 0;
}