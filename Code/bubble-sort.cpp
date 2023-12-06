#include <iostream>
#include <stdlib.h>

using std::cout;
using std::swap;
using std::endl;

int main() {
    int temp = 0;
    int numbers[] = { 7, 6, 4, 3 };
    int numbersLength = sizeof(numbers) / sizeof(int);
    bool cambio = false;

    while ( true )
    {
        cambio = false;
        for (int i = 0; i < numbersLength - 1; i++)
        {
            if ( numbers[i] > numbers[i + 1] )
            {
                swap(numbers[i], numbers[i + 1]);
                cambio = true;
            }
        }

        if (!cambio)
        {
            break;
        }
    }

    for (int i = 0; i < numbersLength; i++)
    {
        cout << i << ". " << numbers[i] << endl;
    }
    return 0;
}