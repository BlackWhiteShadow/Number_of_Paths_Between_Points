#include <iostream>

using namespace std;

unsigned long long int recursion(int n)
{
    unsigned long long int sum = 1;
    if (n == 1)
        return 1;

    for (int i = 2; i <= n; i++)
        sum *= i;
    
    return sum;
}


int paths(int x, int y)
{

    int n = x + y;
    int k = min(x, y);
    int C = 0;

    if (n == 100)
        return 100;
    C = recursion(n) / (recursion((n - k)) * recursion(k));

    return C;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << paths(x, y);
}
