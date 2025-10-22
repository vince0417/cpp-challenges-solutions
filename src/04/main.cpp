// Checking for Bitonic Sequences
#include <iostream>
#include <vector>
#include <algorithm>

// Protótipos;
bool pico(std::vector<int> temp);
bool vale(std::vector<int> temp);
bool is_bitonic(const std::vector<int> &v);

// Função principal;
int main(){ 
    // Vetores para testes;                    Respostas esperadas;
    std::vector<int> myvec = {1, 2, 5, 4, 3};  // Yes
    // std::vector<int> myvec = {1, 1, 1, 1, 1};  // Yes
    // std::vector<int> myvec = {3, 4, 5, 2, 2};  // Yes
    // std::vector<int> myvec = {3, 4, 5, 2, 4};  // No
    // std::vector<int> myvec = {1, 2, 3, 4, 5};  // Yes
    // std::vector<int> myvec = {1, 2, 3, 1, 2};  // No
    // std::vector<int> myvec = {5, 4, 6, 2, 6};  // No
    // std::vector<int> myvec = {5, 4, 3, 2, 1};  // Yes
    // std::vector<int> myvec = {5, 4, 3, 2, 6};  // Yes
    // std::vector<int> myvec = {5, 4, 6, 5, 4};  // No
    // std::vector<int> myvec = {5, 4, 6, 5, 5};  // Yes

    std::cout << (is_bitonic(myvec) == true ? "Yes, it is bitonic." : "No, it is not bitonic.");
    std::cout << std::endl << std::endl << std::flush;
    return 0;
}

// Análisa o vetor a partir do momento que a sequência crescente é quebrada com um número menor que o anterior;
bool pico(std::vector<int> temp){
    std::vector<int> aux = temp;
    std::sort(aux.begin(), aux.end(), std::greater<int>()); // classifica aux em ordem decrescente para comparar com temp e verificar se temp segue as regras;
    return aux == temp;
}

// Análisa o vetor a partir do momento que a sequência decrescente é quebrada com um número maior que o anterior;
bool vale(std::vector<int> temp){
    std::vector<int> aux = temp;
    std::sort(aux.begin(), aux.end()); // classifica aux em ordem crescente para comparar com temp e verificar se temp segue as regras;
    return aux == temp;
}

// Verifica se a sequência é bitônica;
bool is_bitonic(const std::vector<int> &v){
    for (size_t i {1}; i < v.size(); i++){
        if (v.at(i) == v.at(i-1)) continue;
        // Verifica se a sequência inicial é crescente ou não;
        if (v.at(i) > v.at(i-1)){
            for (size_t it = i; it < v.size(); it++){
                // Verifica se/onde a sequência é alterada pela primeira vez;
                if(v.at(it) < v.at(it-1)){
                    // temp recebe o subvetor, iniciando onde a sequência muda e tendo como fim o final do mesmo;
                    std::vector<int> temp(v.begin() + it, v.begin() + it + ((v.size())-it)); 
                    if(pico(temp) == true) return true;
                    else return false;
                }
            }
        }else{
            for (size_t it = i; it < v.size(); it++){
                if(v.at(it) > v.at(it-1)){
                    std::vector<int> temp(v.begin() + it, v.begin() + it + ((v.size())-it));
                    if(vale(temp) == true) return true;
                    else return false;
                }
            }
        }
       
    }
    return true;
}

// As funções "pico" e "vale" entram em ação quando a sequência não segue apenas uma ordem, crescente, descrescente ou constante;
