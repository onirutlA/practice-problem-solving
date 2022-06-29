#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    N & 1 == 1 ? cout << "lampu mati" : cout << "lampu menyala";

    return 0;
}