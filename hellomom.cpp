#include <iostream>

using namespace std;

int add(int a, int b)
{
    int  s = (a + b);
    cout << "sum " << s << "\n";
}

int main()
{
    add(2,3);
    int i = 0;
    int arr[]{1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto element : arr)
    {
        cout << "Hello MOM  ";
        int result = element + 10;
        cout << result;
        cout << "\n";
    }

    // Corrected while loop
    while (i < 40) {
        cout << i << "\n";
        i++;
    }

    return 0; // Adding a return statement to indicate successful termination
}
