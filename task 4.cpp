#include <iostream>
using namespace std;
 
int fact(int n) {
    if (n < 0) {
        return 0;
    }
    return !n ? 1 : n * fact(n - 1);
}
 
int main()
{
    int n;
            cout  << "Enter n:" << endl;
            cin >> n;
            cout << n << "!=" << fact(n) << endl;          
    return 0;
}