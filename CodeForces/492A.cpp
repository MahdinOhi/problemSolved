#include <iostream>
using namespace std;

int main()
{
    int mainCube;
    cin >> mainCube;

    int levelCube = 0;
    int level = 1;
    int previouseCube = 1;
    int remainingCube = mainCube;

    while (true)
    {
        levelCube += level;
        remainingCube -= levelCube;
        if (remainingCube < 0)
        {
            remainingCube += levelCube;
            break;
        }
        level++;
        previouseCube = levelCube;
    }
    cout << (level - 1);
    return 0;
}
