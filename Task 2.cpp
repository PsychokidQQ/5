#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Приклад 4
    for (int a = 0; a <= 25; a++) {
        int b = 2;
        b = pow(b, a);

        cout << b << "\n";
    }

    return 0;
}