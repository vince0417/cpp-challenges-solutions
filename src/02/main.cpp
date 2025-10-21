// Sorting an Array
#include <iostream>

bool sort_array(int *arr, int n); // Protótipo;

// Função Principal;
int main(){ 
    const int len = 7;
    int array[] = {2, 9, 4, 3, 5, 1, 6, 8, 0, 7};

    // Imprime o array original, antes de ser ordenado;
    std::cout << "Original Array: [ ";
    for (int i = 0; i < len; i++)
        std::cout << array[i] << " ";
    std::cout << "]" << std::endl << std::endl << std::flush;

    sort_array(array, len); // Ordena o array;

    // Imprime o array classificado em ordem crescente;
    std::cout << "  Sorted Array: [ ";
    for (int i = 0; i < len; i++)
        std::cout << array[i] << " ";
    std::cout << "]" << std::endl << std::endl << std::flush;

    return 0;
}

bool sort_array(int *arr, int n){
    // Caso o ponteiro não aponte para nenhum objeto ou local de memória válido;
    if (arr == nullptr)
        return false;
    // Caso exista apenas um número no array;
    if (n < 2)
        return true;

    // Método de ordenação conhecido como bubble sort;
    int temp{};
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int it {}; it < n - 1; it++){
            if (arr[it] > arr[it + 1]) {
                temp = arr[it];
                arr[it] = arr[it + 1];
                arr[it + 1] = temp;
                sorted = false;
            }
        }
    }
    return true;

}