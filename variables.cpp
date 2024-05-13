#include <iostream>
using namespace std;

int main(){
    int variable = 89;

    cout << "the memory adress before redeclaration " << &variable << "\n" << endl;

    variable = 78;
    cout << "the memory adress after redeclaration " << &variable << "\n" << endl;

    char First_letter = 'b';
}
