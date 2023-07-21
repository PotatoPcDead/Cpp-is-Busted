#include <iostream>
#include <random>

void random_number_generator(){

    srand(time(NULL));
    int random_number_1 = (rand() % 6) + 1;
    int random_number_2 = (rand() % 6) + 2;
    int random_number_3 = (rand() % 6) + 3;
    std::cout << random_number_1 << '\n';
    std::cout << random_number_2 << '\n';
    std::cout << random_number_3 << '\n';

}

int main(){

    char decision;
    std::cout << "\n Would you like to generate random numbers \n y for yes \n n for no \n Decision =      ";
    std::cin >> decision;
    if (decision == 'y' || decision == 'Y'){

        random_number_generator();
    
    }
    return 0;
}