#include <iostream>
#include <math.h>
/*
Zadanie
Napisz program, który:

    wczyta ze standardowego wejścia: podstawę a oraz wykładnik b,
    wyznaczy ostatnią cyfrę liczby ab,
    wypisze wynik na standardowe wyjście.

Wejście
W pierwszej linii wejścia znajduje się jedna liczba całkowia D (1≤D≤10), oznaczjąca 
liczbę przypadków do rozważenia. Opis każdego przypadku podany jest w jednym wierszu, 
zawierającym dwie liczby naturalne a i b oddzielone pojedynczym odstępem (spacją), takie, że (1 ≤ a,b ≤ 1 000 000 000).

Wyjście
Dla każdego przypadku z wejścia Twój program powinien wypisać (w osobnej linii dla każdego 
przypadku z wejścia) cyfrę jedności liczby ab zapisanej dziesiętnie.

*/
int last_digit(int a, int b){
    if(b == 0 || a == 1) return 1;
    int pwr = (b % 4 == 0) ? 4 : b % 4;
    return int(pow(a % 10, pwr)) % 10;
}

int main(){
    int D;
    std::cin>>D;
    for(int i=0; i<D; i++){
        int a, b;
        std::cin>>a>>b;
        std::cout<<last_digit(a, b)<<"\n";
    }
}