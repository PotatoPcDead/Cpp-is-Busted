#include <iostream>
#include <random>

void random_generator(){
    srand(time(NULL));
    int random_number_1 = (rand() % 6) + 1;
    int random_number_2 = (rand() % 6) + 2;
    int random_number_3 = (rand() % 6) + 3;
    std::cout << random_number_1 << '\n';
    std::cout << random_number_2 << '\n';
    std::cout << random_number_3 << '\n';

}

int main(){

    random_generator();

    
    return 0;
}