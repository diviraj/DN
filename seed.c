#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n=1;
    cin >> n;
    int product = 1;
    int seed = 1;
    while (seed < (n * 0.5)){
        if (n % seed == 0){
            int factor = seed;
            product = factor;
            while(!(factor == 0)){
                int mod = factor % 10;
                factor = factor / 10;
                product *= mod;
            }
            if (product == n){
                cout << seed;
                return 0;
            }
        }
        seed++;
    }
}
