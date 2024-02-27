#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n)
{
    int cnt = 0;
    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (primes[i])
        {
            cnt++;
            for (int j = 2 * i; j < n; j=j+i)
            {
                primes[j] = 0;
            }
        }
    }
    return cnt;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << endl << countPrimes(n) << endl;
}