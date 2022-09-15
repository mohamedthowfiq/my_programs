#include <iostream>
#include <cmath>
using namespace std;

int fact(int);

int main()
{
    int n = 0, i = 0, sum = 0, j = 1, k = 2, choice = 0;
    float x = 0, y = 0;
    cout << "Enter your choice : " << endl;
    cin >> choice;
    if (choice == 1 || choice == 2)
    {
        cout << "Enter the number of terms: " << endl;
        cin >> n;
    }

    switch (choice)
    {
        case 1: sum = 1;
                for(i = 2; i <= n; i++)
                {
                    sum = sum + k * k;
                    k = k + 2;
                }
                cout << "Sum = " << sum << endl;
            break;
        case 2: sum = 0;
                for (i = 1; i <= n; i++)
                {
                    sum = sum + j;
                    j += 2;
                }
                cout << "Sum = " << sum << endl;
            break;
        case 3: 
                cout << "Enter the value of x and n" << endl;
                cin >> x >> n;
                y = (x - pow(x, 3) / fact(3)) + (pow(x, 5) / fact(5)); // formula-1 
                y = x - pow(x, n) / fact(3); // formula - 2
                cout << "Result: " << y << endl;
            break;
        default:
            cout << "Wrong option" << endl;
    }

    getchar();
    return 0;
}

int fact(int x)
{
    if (x == 1)
        return 1;
    else
        return x * fact(x-1);
}