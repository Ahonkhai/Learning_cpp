#include <iostream>

int number = 3;

void print_num();
int main(){

    int number = 1;
    std::cout << number << '\n';
    print_num(); 
    return 0;
}

void print_num() {
    int number = 2;
    std::cout << number << " Local\n"<< ::number << " Global" << '\n'; 
    }

// Better to use local variables rather than global
// a function would always use it's local variable first
// buuuuut if you want the global variable add "::" 🦆🦆🦆