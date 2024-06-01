#include <iostream>

using namespace std;


void bake_pizza();
void bake_pizza(string topping1);
void bake_pizza(string topping1, string topping2);


int main() {


    bake_pizza("pepperoni", "mushroom");
    return 0;
}

void bake_pizza(){
    cout << "Here is your pizza\n";
}
void bake_pizza(string topping1){
    cout << "Here is your " << topping1 << " pizza\n";
}

void bake_pizza(string topping1, string topping2){
    cout << "Here is your " << topping1 << " and " << topping2 << " pizza\n";

}   

// Overloading functions, basically functions can share the same name but different parameters