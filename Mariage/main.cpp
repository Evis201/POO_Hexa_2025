// SRC : POO/Mariage/main.cpp²
//
#include "Man.cpp"
#include "Woman.cpp"
#include "Person.cpp"

int main() {
    Woman raf("Raf", "jsp", 19);
    Man alex("Alex", "jsp", 34);

    raf.setPartner(&alex);
    alex.setPartner(&raf);


    raf.display();
    alex.display();

    return 0;
}