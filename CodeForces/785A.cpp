#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;

    string shape[n];

    for (int i = 0; i < n; i++)
    {
        cin >> shape[i];
    }

    int countSides = 0;
    for (int i = 0; i < n; i++)
    {
        if (shape[i] == "Tetrahedron")
        {
            countSides += 4;
        }
        if (shape[i] == "Cube")
        {
            countSides += 6;
        }
        if (shape[i] == "Octahedron")
        {
            countSides += 8;
        }
        if (shape[i] == "Dodecahedron")
        {
            countSides += 12;
        }
        if (shape[i] == "Icosahedron")
        {
            countSides += 20;
        }
    }

    cout << countSides << endl;

    return 0;
}