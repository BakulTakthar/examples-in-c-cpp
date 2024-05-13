#include <iostream>
using namespace std;

int main()
{
    string name;
    string firstname;
    string lastname;

    string list_of_name[2];

    cout << "enter the name of the person (full name) seperated by a space \n";
    cin >> name;
    
    for (int i = 0; i<= name.length(); i++){
        if (name[i] == ' '){
            firstname = name.substr(0,i); 
            lastname = name.substr(i, name.length());

        }
    }

    cout << firstname;
    cout << lastname;

}
